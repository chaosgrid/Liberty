#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ed20);

#define public_629468d _public_629468d
#define public_6294693 _public_6294693
#define public_62946b2 _public_62946b2
#define public_62946d0 _public_62946d0
#define public_62946d8 _public_62946d8
#define public_6294708 _public_6294708
#define public_6294732 _public_6294732
#define public_6294738 _public_6294738
#define public_629473e _public_629473e
#define public_6294758 _public_6294758

PROC_DECLARE(0x6294660, internal_6294660, public_6294660);
extern "C" NAKED register_t __cdecl internal_6294660()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_629473e
        mov cl, byte ptr ds : [esi+0x50]
        cmp cl, byte ptr ds : [esi+0x51]
        je public_629473e
        test cl, cl
        mov edx, dword ptr ds : [esi+0xC]
        je public_629468d
        fld dword ptr ds : [edx+0x90]
        jmp public_6294693
        public_629468d : nop
        fld dword ptr ds : [edx+0x8C]
        public_6294693 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x4C]
        fst dword ptr ds : [esi+0x4C]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62946b2
        mov byte ptr ds : [esi+0x51], cl
        mov dword ptr ds : [esi+0x4C], 0
        public_62946b2 : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_629473e
        mov al, byte ptr ds : [esi+0x51]
        cmp cl, al
        jne public_62946d8
        test al, al
        je public_62946d0
        fld dword ptr ds : [public_639a1d0]
        jmp public_6294738
        public_62946d0 : nop
        fld dword ptr ds : [public_6399408]
        jmp public_6294738
        public_62946d8 : nop
        test cl, cl
        je public_6294708
        mov ecx, dword ptr ds : [edx+0x90]
        fld dword ptr ds : [public_639a1d0]
        mov dword ptr ss : [esp+8], ecx
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_6294738
        fstp st(0)
        fld dword ptr ds : [esi+0x4C]
        fdiv dword ptr ss : [esp+8]
        jmp public_6294738
        public_6294708 : nop
        mov edx, dword ptr ds : [edx+0x8C]
        fld dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_6294732
        fstp st(0)
        fld dword ptr ds : [esi+0x4C]
        fdiv dword ptr ss : [esp+8]
        public_6294732 : nop
        fsubr qword ptr ds : [public_6399410]
        public_6294738 : nop
        fstp dword ptr ds : [edi+0x140]
        public_629473e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6294758
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6294758
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 8
        public_6294758 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        mov ecx, esi
        call public_629ed20
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6294660)
    }
}

#undef public_629468d
#undef public_6294693
#undef public_62946b2
#undef public_62946d0
#undef public_62946d8
#undef public_6294708
#undef public_6294732
#undef public_6294738
#undef public_629473e
#undef public_6294758
