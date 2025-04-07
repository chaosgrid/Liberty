#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271d00);
CLANG_FORWARD_PROC_SYMBOL(public_6306fe0);
CLANG_FORWARD_PROC_SYMBOL(public_632c0d0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_6329dc4 _public_6329dc4
#define public_6329dda _public_6329dda
#define public_6329deb _public_6329deb
#define public_6329e05 _public_6329e05
#define public_6329e3a _public_6329e3a
#define public_6329e4d _public_6329e4d
#define public_6329e4f _public_6329e4f
#define public_6329e66 _public_6329e66
#define public_6329e7d _public_6329e7d
#define public_6329e94 _public_6329e94
#define public_6329e96 _public_6329e96
#define public_6329ea5 _public_6329ea5

PROC_DECLARE(0x6329d30, internal_6329d30, public_6329d30);
extern "C" NAKED register_t __cdecl internal_6329d30()
{
    __asm
    {
        mov eax, 0x203C
        call public_6391dc0
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x204C]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x2C]
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x34], ecx
        push edi
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0x47C35000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x18], 0x47C35000
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x38], edx
        call dword ptr ds : [eax+0x24]
        lea edx, ss:[esp+0x2C]
        lea ebp, ds:[esi+4]
        push edx
        mov ecx, ebp
        call public_632c0d0
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6329dc4
        push eax
        lea eax, ss:[esp+0x50]
/*FIXUP push offset public_63a45d8 @0x6329daf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a45d8
        push eax
        call public_6306fe0
        add esp, 0xC
        push eax
        call dword ptr ds : [public_639911c]
        public_6329dc4 : nop
        lea edi, ds:[esi+0x10]
        mov ecx, edi
        call public_6271d00
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_6329dda
        lea eax, ds:[esi+0x24]
        jmp public_6329deb
        public_6329dda : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call public_632c410
        mov eax, dword ptr ds : [eax]
        add eax, 8
        public_6329deb : nop
        mov edx, dword ptr ds : [eax]
        xor eax, eax
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov eax, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_6329ea5
        public_6329e05 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [edi]
        push 0
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+4]
        fild dword ptr ds : [esi+0x30]
        fild dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6329e3a
        fst dword ptr ss : [esp+0x20]
        public_6329e3a : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_6329e4d
        fstp dword ptr ss : [esp+0x1C]
        jmp public_6329e4f
        public_6329e4d : nop
        fstp st(0)
        public_6329e4f : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_6329e66
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], eax
        public_6329e66 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jnp public_6329e7d
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        public_6329e7d : nop
        fild dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6329e94
        fstp dword ptr ss : [esp+0x18]
        jmp public_6329e96
        public_6329e94 : nop
        fstp st(0)
        public_6329e96 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6329e05
        public_6329ea5 : nop
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        add eax, 8
        mov dword ptr ds : [esi+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+8]
        add eax, 0x10
        mov dword ptr ds : [esi+0x2C], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x30], ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+8]
        fsub dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x205C]
        mov edx, dword ptr ss : [esp+0x2060]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+0x2054]
        fstp dword ptr ds : [eax]
        pop edi
        fld dword ptr ss : [esp+0x20]
        pop esi
        fsub dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [edx]
        add esp, 0x203C
        ret 0x10
        UNREACHABLE_TRAP(0x6329d30)
    }
}

#undef public_6329dc4
#undef public_6329dda
#undef public_6329deb
#undef public_6329e05
#undef public_6329e3a
#undef public_6329e4d
#undef public_6329e4f
#undef public_6329e66
#undef public_6329e7d
#undef public_6329e94
#undef public_6329e96
#undef public_6329ea5
