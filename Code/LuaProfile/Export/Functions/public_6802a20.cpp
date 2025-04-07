#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802a20);

#define public_6802a80 _public_6802a80
#define public_6802ab8 _public_6802ab8
#define public_6802ac9 _public_6802ac9
#define public_6802acc _public_6802acc

PROC_DECLARE(0x6802a20, internal_6802a20, public_6802a20);
extern "C" NAKED register_t __cdecl internal_6802a20()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_680e604]
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
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ss : [esp+0x10], esi
        mov esi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x14], 0
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6802a80
        mov edx, dword ptr ds : [public_680e604]
        push 0
/*FIXUP push offset public_680d49c @0x6802a74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d49c
        push 0
        call dword ptr ds : [edx+0x38]
        jmp public_6802ac9
        public_6802a80 : nop
        mov edi, dword ptr ds : [public_680e604]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+4]
        shl eax, 4
        test edx, edx
        lea eax, ds:[eax+ecx-0x10]
        je public_6802ab8
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
        jmp public_6802acc
        public_6802ab8 : nop
        sub eax, ecx
        push 0xFFFFFFFF
        sar eax, 4
        inc eax
/*FIXUP push offset public_680d458 @0x6802ac0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d458
        push eax
        call dword ptr ds : [edi+0x38]
        public_6802ac9 : nop
        add esp, 0xC
        public_6802acc : nop
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+4]
        shl esi, 4
        add ecx, esi
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_680e604]
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
        UNREACHABLE_TRAP(0x6802a20)
    }
}

#undef public_6802a80
#undef public_6802ab8
#undef public_6802ac9
#undef public_6802acc
