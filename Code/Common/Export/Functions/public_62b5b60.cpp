#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_62b5b60);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62b5ba5 _public_62b5ba5
#define public_62b5c00 _public_62b5c00
#define public_62b5c6d _public_62b5c6d
#define public_62b5c76 _public_62b5c76

PROC_DECLARE(0x62b5b60, internal_62b5b60, public_62b5b60);
extern "C" NAKED register_t __cdecl internal_62b5b60()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx]
        push esi
        mov dword ptr ds : [ebx+0xB0], eax
        mov eax, dword ptr ss : [ebp+4]
        push edi
        push eax
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0xB4], ecx
        cmp dword ptr ss : [ebp+0xC], 0xBF800000
        jne public_62b5ba5
        mov edx, dword ptr ds : [ebx+0x88]
        fld dword ptr ds : [edx+0x1C]
        fstp dword ptr ds : [ebx+0xB8]
        jmp public_62b5c76
        public_62b5ba5 : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62b5c00
        fld dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ebx+0xB0]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push eax
        mov ecx, ebx
        mov esi, 0x100001
        call public_6262d50
        mov ecx, eax
        add ecx, 8
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x3B
/*FIXUP push offset public_639e794 @0x62b5be4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e794
/*FIXUP push offset public_639e740 @0x62b5be9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e740
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x20
        mov dword ptr ds : [ebx+0xB8], 0x3F000000
        jmp public_62b5c76
        public_62b5c00 : nop
        mov ecx, dword ptr ds : [ebx+0x88]
        fld dword ptr ds : [ecx+0x1C]
        fcomp dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 5
        jp public_62b5c6d
        mov edx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ebx+0xB0]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov ecx, ebx
        fld dword ptr ss : [ebp+0xC]
        mov esi, 0x100001
        fstp qword ptr ss : [esp]
        push eax
        call public_6262d50
        mov ecx, eax
        add ecx, 8
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x45
/*FIXUP push offset public_639e794 @0x62b5c51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e794
/*FIXUP push offset public_639e6e0 @0x62b5c56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e6e0
        push esi
        call dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x3C]
        add esp, 0x28
        mov dword ptr ds : [ebx+0xB8], edx
        jmp public_62b5c76
        public_62b5c6d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xB8], eax
        public_62b5c76 : nop
        lea ecx, ss:[ebp+0x10]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x2C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea esi, ss:[ebp+0x1C]
        lea edi, ds:[ebx+8]
        mov ecx, 9
        rep movsd
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[ebp+0x4C]
        push ecx
        add ebp, 0x40
        push ebp
        mov ecx, ebx
        call dword ptr ds : [eax+0x9C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b5b60)
    }
}

#undef public_62b5ba5
#undef public_62b5c00
#undef public_62b5c6d
#undef public_62b5c76
