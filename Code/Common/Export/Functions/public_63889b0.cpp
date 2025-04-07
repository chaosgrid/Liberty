#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6374610);
CLANG_FORWARD_PROC_SYMBOL(public_6386380);
CLANG_FORWARD_PROC_SYMBOL(public_63889b0);

#define public_63889eb _public_63889eb
#define public_6388a02 _public_6388a02
#define public_6388a0f _public_6388a0f
#define public_6388a14 _public_6388a14
#define public_6388a2f _public_6388a2f
#define public_6388a36 _public_6388a36
#define public_6388a3f _public_6388a3f
#define public_6388a69 _public_6388a69
#define public_6388a8a _public_6388a8a
#define public_6388a93 _public_6388a93

PROC_DECLARE(0x63889b0, internal_63889b0, public_63889b0);
extern "C" NAKED register_t __cdecl internal_63889b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push ecx
        push edx
        xor ebp, ebp
        call public_6386380
        add esp, 0xC
        mov dword ptr ss : [esp+0x20], eax
        call public_6374610
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6388a3f
        mov edx, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test edx, edx
        je public_6388a3f
        public_63889eb : nop
        mov eax, dword ptr ds : [edx+0xC]
        xor edi, edi
        xor esi, esi
        test eax, eax
        je public_6388a2f
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6388a2f
        public_6388a02 : nop
        test byte ptr ds : [eax+0x52], 1
        je public_6388a0f
        mov esi, 1
        jmp public_6388a14
        public_6388a0f : nop
        mov edi, 1
        public_6388a14 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6388a02
        test esi, esi
        je public_6388a2f
        test edi, edi
        je public_6388a2f
        or dword ptr ds : [edx+0x14], 0x1000000
        inc ebp
        jmp public_6388a36
        public_6388a2f : nop
        and dword ptr ds : [edx+0x14], 0xFEFFFFFF
        public_6388a36 : nop
        mov edx, dword ptr ds : [ebx]
        add ebx, 4
        test edx, edx
        jne public_63889eb
        public_6388a3f : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [public_63991e8]
        push ebp
/*FIXUP push offset public_63f7cb4 @0x6388a4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push edi
        call ebx
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        test eax, eax
        je public_6388a93
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_6388a93
        public_6388a69 : nop
        test dword ptr ds : [eax+0x14], 0x1000000
        je public_6388a8a
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f7cb4 @0x6388a7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push edi
        call ebx
        add esp, 0xC
        public_6388a8a : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_6388a69
        public_6388a93 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_636ecc0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63889b0)
    }
}

#undef public_63889eb
#undef public_6388a02
#undef public_6388a0f
#undef public_6388a14
#undef public_6388a2f
#undef public_6388a36
#undef public_6388a3f
#undef public_6388a69
#undef public_6388a8a
#undef public_6388a93
