#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b190);
CLANG_FORWARD_PROC_SYMBOL(public_627b1b0);
CLANG_FORWARD_JUMP_SYMBOL(public_63928fb);

PROC_DECLARE(0x6273630, internal_6273630, public_6273630);
extern "C" NAKED register_t __cdecl internal_6273630()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63928fb @0x6273632*/
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
        lea edi, ds:[esi+0x34]
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], esi
        call public_627b190
        xor ecx, ecx
        mov dword ptr ds : [esi], ecx
        lea eax, ds:[esi+4]
        mov ebx, ecx
        mov edx, eax
        mov dword ptr ds : [edx], ebx
        mov dword ptr ds : [edx+4], ebx
        mov dword ptr ds : [edx+8], ebx
        mov edx, 0x3F800000
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, edi
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0xC], edx
        call public_627b1b0
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6273630)
    }
}
