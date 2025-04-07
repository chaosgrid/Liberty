#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0376f);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ba02);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ba49);

#define public_6d037ba _public_6d037ba
#define public_6d037d7 _public_6d037d7
#define public_6d037ee _public_6d037ee
#define public_6d037f6 _public_6d037f6
#define public_6d03812 _public_6d03812
#define public_6d03823 _public_6d03823
#define public_6d03829 _public_6d03829
#define public_6d03876 _public_6d03876
#define public_6d0387f _public_6d0387f
#define public_6d03885 _public_6d03885
#define public_6d03889 _public_6d03889
#define public_6d038b1 _public_6d038b1
#define public_6d038b6 _public_6d038b6

PROC_DECLARE(0x6d0376f, internal_6d0376f, public_6d0376f);
extern "C" NAKED register_t __cdecl internal_6d0376f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x3C
        mov dword ptr ss : [ebp-0x3C], ecx
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, 0x44C
        call public_6d2ba02
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+0x2A4]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+0x2A4]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d03829
        public_6d037ba : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx+0x25]
        test eax, eax
        jne public_6d037f6
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x30], edx
        public_6d037d7 : nop
        mov eax, dword ptr ss : [ebp-0x30]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x25]
        test edx, edx
        jne public_6d037ee
        mov eax, dword ptr ss : [ebp-0x30]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x30], ecx
        jmp public_6d037d7
        public_6d037ee : nop
        mov edx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d03823
        public_6d037f6 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x2C], ecx
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d03812
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d037f6
        public_6d03812 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp-0x2C]
        je public_6d03823
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-4], ecx
        public_6d03823 : nop
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x18], edx
        public_6d03829 : nop
        mov eax, dword ptr ss : [ebp-4]
        sub eax, dword ptr ss : [ebp-0xC]
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d038b6
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp-0x34]
        movzx edx, byte ptr ds : [ecx+0x10]
        test edx, edx
        je public_6d03885
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, 1
        test edx, edx
        je public_6d03876
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d0387f
        public_6d03876 : nop
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x10], eax
        public_6d0387f : nop
        mov byte ptr ss : [ebp-0x35], 1
        jmp public_6d03889
        public_6d03885 : nop
        mov byte ptr ss : [ebp-0x35], 0
        public_6d03889 : nop
        movzx ecx, byte ptr ss : [ebp-0x35]
        test ecx, ecx
        je public_6d038b1
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+0x130]
        push edx
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, 0x44C
        call public_6d2ba49
        public_6d038b1 : nop
        jmp public_6d037ba
        public_6d038b6 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d0376f)
    }
}

#undef public_6d037ba
#undef public_6d037d7
#undef public_6d037ee
#undef public_6d037f6
#undef public_6d03812
#undef public_6d03823
#undef public_6d03829
#undef public_6d03876
#undef public_6d0387f
#undef public_6d03885
#undef public_6d03889
#undef public_6d038b1
#undef public_6d038b6
