#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51bbb);
CLANG_FORWARD_PROC_SYMBOL(public_6d51d7f);

PROC_DECLARE(0x6d51d7f, internal_6d51d7f, public_6d51d7f);
extern "C" NAKED register_t __cdecl internal_6d51d7f()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp], eax
        call public_6d51bbb
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp], eax
        call public_6d51bbb
        sub esp, 0x10
        movd mm0, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x34]
        movq mm1, mm0
        lea edx, ss:[esp+0x20]
        pfmul mm0, mm0
        lea ecx, ss:[esp+0x10]
        pfsub mm1, mm0
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], ecx
        pfmul mm1, mmword ptr ds : [public_6d613e8]
        movd dword ptr ss : [esp+0xC], mm1
        call public_6d51bbb
        add esp, 0x20
        femms 
        ret 0x18
        UNREACHABLE_TRAP(0x6d51d7f)
    }
}
