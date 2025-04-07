#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6344230);

#define public_6344245 _public_6344245

PROC_DECLARE(0x6344230, internal_6344230, public_6344230);
extern "C" NAKED register_t __cdecl internal_6344230()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0xA]
        cmp ax, word ptr ds : [ecx+8]
        push esi
        lea esi, ds:[ecx+8]
        jb public_6344245
        mov ecx, esi
        call public_63441a0
        public_6344245 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6344230)
    }
}

#undef public_6344245
