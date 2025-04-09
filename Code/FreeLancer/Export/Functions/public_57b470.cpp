#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3d68);

#define public_57b4ba _public_57b4ba
#define public_57b4fd _public_57b4fd

PROC_DECLARE(0x57b470, internal_57b470, public_57b470);
extern "C" NAKED register_t __cdecl internal_57b470()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c3d68 @0x57b478*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3d68
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, dword ptr ds : [esi+0x48C]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        mov dword ptr ss : [esp+0x18], 0
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_57b4ba
        mov ebx, eax
        public_57b4ba : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+0x490]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+0x490], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov ebx, 1
        je public_57b4fd
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx]
        public_57b4fd : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x400], bl
        mov byte ptr ds : [esi+0x401], bl
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x57b470)
    }
}

#undef public_57b4ba
#undef public_57b4fd
