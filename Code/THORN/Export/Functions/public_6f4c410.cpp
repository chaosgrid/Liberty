#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c410);

#define public_6f4c470 _public_6f4c470
#define public_6f4c4a8 _public_6f4c4a8
#define public_6f4c4b9 _public_6f4c4b9
#define public_6f4c4bc _public_6f4c4bc

PROC_DECLARE(0x6f4c410, internal_6f4c410, public_6f4c410);
extern "C" NAKED register_t __cdecl internal_6f4c410()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_6f61e28]
        lea ecx, ds:[eax+0xC]
        push ebx
        mov edx, ecx
        mov ebx, dword ptr ds : [edx]
        push esi
        mov esi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax]
        push edi
        sub edx, dword ptr ds : [eax+4]
        sar edx, 4
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ss : [esp+0x10], esi
        mov esi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x14], 0
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6f4c470
        mov edx, dword ptr ds : [public_6f61e28]
        push 0
/*FIXUP push offset public_6f6053c @0x6f4c464*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6053c
        push 0
        call dword ptr ds : [edx+0x38]
        jmp public_6f4c4b9
        public_6f4c470 : nop
        mov edi, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+4]
        shl eax, 4
        test edx, edx
        lea eax, ds:[eax+ecx-0x10]
        je public_6f4c4a8
        push ebp
        mov ebp, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+0x18]
        sub eax, ecx
        add edx, 0x28
        push ebp
        sar eax, 4
        push edx
        inc eax
        push eax
        call dword ptr ds : [edi+0x38]
        add esp, 0xC
        pop ebp
        jmp public_6f4c4bc
        public_6f4c4a8 : nop
        sub eax, ecx
        push 0xFFFFFFFF
        sar eax, 4
        inc eax
/*FIXUP push offset public_6f604a8 @0x6f4c4b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f604a8
        push eax
        call dword ptr ds : [edi+0x38]
        public_6f4c4b9 : nop
        add esp, 0xC
        public_6f4c4bc : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        shl esi, 4
        add ecx, esi
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        add edx, 0xC
        mov dword ptr ds : [edx], ebx
        pop edi
        mov dword ptr ds : [edx+4], eax
        pop esi
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f4c410)
    }
}

#undef public_6f4c470
#undef public_6f4c4a8
#undef public_6f4c4b9
#undef public_6f4c4bc
