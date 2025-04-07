#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62736c0);
CLANG_FORWARD_PROC_SYMBOL(public_627b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_627b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_JUMP_SYMBOL(public_63928fb);

PROC_DECLARE(0x62736c0, internal_62736c0, public_62736c0);
extern "C" NAKED register_t __cdecl internal_62736c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63928fb @0x62736c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63928fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+0x28], ebx
        call public_6334430
        lea edi, ds:[esi+0x34]
        add esp, 4
        mov ecx, edi
        call public_627b1d0
        lea eax, ds:[esi+4]
        mov dword ptr ds : [esi], ebx
        mov edx, ebx
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [eax+0x28], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        call public_627b1b0
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_627b1d0
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62736c0)
    }
}
