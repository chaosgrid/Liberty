#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4b20);

#define public_62fe9b4 _public_62fe9b4
#define public_62fe9bf _public_62fe9bf
#define public_62fea18 _public_62fea18
#define public_62fea1a _public_62fea1a
#define public_62fea5b _public_62fea5b
#define public_62fea63 _public_62fea63
#define public_62fea69 _public_62fea69
#define public_62feab0 _public_62feab0
#define public_62feab8 _public_62feab8
#define public_62feabe _public_62feabe

PROC_DECLARE(0x62fe970, internal_62fe970, public_62fe970);
extern "C" NAKED register_t __cdecl internal_62fe970()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2F4]
        xor ecx, ecx
        cmp eax, 1
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_62fe9bf
        cmp eax, ecx
        jne public_62fe9b4
        fld dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_62fe9bf
        public_62fe9b4 : nop
        pop edi
        mov byte ptr ds : [esi+0x2EA], cl
        pop esi
        ret 4
        public_62fe9bf : nop
        mov byte ptr ds : [esi+0x2EA], 1
        fld dword ptr ds : [edi+4]
        fchs 
        fstp dword ptr ds : [esi+0x2D8]
        fld dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x2E0], ecx
        mov ecx, dword ptr ds : [esi+0x20]
        fchs 
        fstp dword ptr ds : [esi+0x2DC]
        call public_62d4b20
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62fea18
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [esi+0x2D8]
        fstp dword ptr ds : [esi+0x2D8]
        fmul dword ptr ds : [esi+0x2DC]
        fstp dword ptr ds : [esi+0x2DC]
        jmp public_62fea1a
        public_62fea18 : nop
        fstp st(0)
        public_62fea1a : nop
        fld dword ptr ds : [esi+0x2D8]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62fea5b
        fld dword ptr ds : [esi+0x2D8]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62fea63
        fld dword ptr ds : [esi+0x2D8]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62fea5b
        fld dword ptr ds : [esi+0x2D8]
        jmp public_62fea69
        public_62fea5b : nop
        fld dword ptr ds : [public_6399404]
        jmp public_62fea69
        public_62fea63 : nop
        fld dword ptr ds : [public_639a1d0]
        public_62fea69 : nop
        fstp dword ptr ds : [esi+0x2D8]
        fld dword ptr ds : [esi+0x2DC]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62feab0
        fld dword ptr ds : [esi+0x2DC]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62feab8
        fld dword ptr ds : [esi+0x2DC]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62feab0
        fld dword ptr ds : [esi+0x2DC]
        jmp public_62feabe
        public_62feab0 : nop
        fld dword ptr ds : [public_6399404]
        jmp public_62feabe
        public_62feab8 : nop
        fld dword ptr ds : [public_639a1d0]
        public_62feabe : nop
        fstp dword ptr ds : [esi+0x2DC]
        fld dword ptr ds : [edi+8]
        pop edi
        fchs 
        fstp dword ptr ds : [esi+0x2E0]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62fe970)
    }
}

#undef public_62fe9b4
#undef public_62fe9bf
#undef public_62fea18
#undef public_62fea1a
#undef public_62fea5b
#undef public_62fea63
#undef public_62fea69
#undef public_62feab0
#undef public_62feab8
#undef public_62feabe
