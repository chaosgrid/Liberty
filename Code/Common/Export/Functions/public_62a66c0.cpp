#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62a66e1 _public_62a66e1
#define public_62a66e7 _public_62a66e7
#define public_62a6709 _public_62a6709
#define public_62a670f _public_62a670f
#define public_62a6731 _public_62a6731
#define public_62a6737 _public_62a6737
#define public_62a677e _public_62a677e
#define public_62a678b _public_62a678b
#define public_62a6797 _public_62a6797
#define public_62a67aa _public_62a67aa

PROC_DECLARE(0x62a66c0, internal_62a66c0, public_62a66c0);
extern "C" NAKED register_t __cdecl internal_62a66c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi]
        push edi
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jne public_62a66e1
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a66e7
        public_62a66e1 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a66e7 : nop
        call public_6391dae
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_6399408]
        mov ebx, eax
        fld dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_62a6709
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a670f
        public_62a6709 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a670f : nop
        call public_6391dae
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_6399408]
        mov ebp, eax
        fld dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_62a6731
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a6737
        public_62a6731 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a6737 : nop
        call public_6391dae
        mov edi, eax
        mov eax, ebx
        cdq 
        mov ecx, eax
        xor ecx, edx
        sub ecx, edx
        mov eax, ebp
        cdq 
        mov esi, eax
        xor esi, edx
        sub esi, edx
        mov eax, edi
        cdq 
        xor eax, edx
        sub eax, edx
        sar ecx, 1
        sar esi, 1
        sar eax, 1
        cmp ecx, 0x1FF
        ja public_62a67aa
        cmp esi, 0x1FF
        ja public_62a67aa
        cmp eax, 0x1FF
        ja public_62a67aa
        test ebx, ebx
        jge public_62a677e
        or ecx, 0x200
        public_62a677e : nop
        shl ecx, 0x14
        test ebp, ebp
        jge public_62a678b
        or esi, 0x200
        public_62a678b : nop
        shl esi, 0xA
        test edi, edi
        jge public_62a6797
        or eax, 0x200
        public_62a6797 : nop
        or eax, esi
        pop edi
        or eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        mov al, 1
        pop ebx
        ret 8
        public_62a67aa : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62a66c0)
    }
}

#undef public_62a66e1
#undef public_62a66e7
#undef public_62a6709
#undef public_62a670f
#undef public_62a6731
#undef public_62a6737
#undef public_62a677e
#undef public_62a678b
#undef public_62a6797
#undef public_62a67aa
