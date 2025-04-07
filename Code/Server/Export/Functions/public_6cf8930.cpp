#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60bd9);

#define public_6cf8a00 _public_6cf8a00
#define public_6cf8a2d _public_6cf8a2d
#define public_6cf8a4a _public_6cf8a4a
#define public_6cf8a5e _public_6cf8a5e
#define public_6cf8a63 _public_6cf8a63

PROC_DECLARE(0x6cf8930, internal_6cf8930, public_6cf8930);
extern "C" NAKED register_t __cdecl internal_6cf8930()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_6d60bd9 @0x6cf893c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60bd9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        test ecx, 0x3FFFFFFF
        push ebx
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf8a63
        push ecx
        call public_6d00670
        mov esi, eax
        xor ebx, ebx
        add esp, 4
        cmp esi, ebx
        je public_6cf8a5e
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_6cf8a4a
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_6cf8a4a
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_6cf8a4a
        mov cl, byte ptr ss : [esp+0x34]
        push edi
        push 0x14
        mov byte ptr ss : [esp+0x10], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x20], 0x17
        call dword ptr ds : [edx+0x1D8]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x188]
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6cf8a2d
        nop 
        public_6cf8a00 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6cf8a00
        mov eax, dword ptr ss : [esp+0x10]
        public_6cf8a2d : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_6cf8a4a : nop
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_6cf8a5e : nop
        mov eax, 0xFFFFFFFE
        public_6cf8a63 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6cf8930)
    }
}

#undef public_6cf8a00
#undef public_6cf8a2d
#undef public_6cf8a4a
#undef public_6cf8a5e
#undef public_6cf8a63
