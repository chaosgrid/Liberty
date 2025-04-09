#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_579e90);
CLANG_FORWARD_PROC_SYMBOL(public_598210);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_598288 _public_598288
#define public_598293 _public_598293
#define public_598297 _public_598297
#define public_5982b1 _public_5982b1
#define public_5982b3 _public_5982b3
#define public_5982d6 _public_5982d6
#define public_5982e0 _public_5982e0
#define public_5982ee _public_5982ee
#define public_5982f9 _public_5982f9
#define public_59830d _public_59830d
#define public_59831c _public_59831c
#define public_598335 _public_598335
#define public_59837b _public_59837b
#define public_59837d _public_59837d
#define public_5983e0 _public_5983e0
#define public_59841f _public_59841f
#define public_598427 _public_598427
#define public_598438 _public_598438
#define public_59843b _public_59843b
#define public_59845a _public_59845a
#define public_59846b _public_59846b
#define public_59847c _public_59847c

PROC_DECLARE(0x598210, internal_598210, public_598210);
extern "C" NAKED register_t __cdecl internal_598210()
{
    __asm
    {
        sub esp, 0xA4
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x98]
        test ecx, ecx
        je public_59847c
        mov eax, dword ptr ds : [edi+0x9C]
        mov edx, dword ptr ss : [esp+0xB8]
        sub eax, ecx
        sar eax, 2
        cmp edx, eax
        jae public_59847c
        mov ecx, dword ptr ds : [edi+0xA8]
        test ecx, ecx
        lea ebp, ds:[edi+0xA4]
        je public_59847c
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [esp+0xC0]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jae public_59847c
        mov esi, dword ptr ss : [esp+0xBC]
        test esi, esi
        jne public_598297
        mov ecx, dword ptr ds : [edi+0x98]
        test ecx, ecx
        jne public_598288
        xor eax, eax
        jmp public_598293
        public_598288 : nop
        mov eax, dword ptr ds : [edi+0x9C]
        sub eax, ecx
        sar eax, 2
        public_598293 : nop
        sub eax, edx
        mov esi, eax
        public_598297 : nop
        mov eax, dword ptr ss : [esp+0xC4]
        test eax, eax
        jne public_5982b3
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_5982b1
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        public_5982b1 : nop
        sub eax, ebx
        public_5982b3 : nop
        add esi, edx
        cmp edx, esi
        mov ebx, edx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x20], esi
        jae public_59847c
        mov ecx, dword ptr ss : [esp+0xC0]
        add ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_5982e0
        public_5982d6 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        lea ebx, ds:[ebx]
        public_5982e0 : nop
        mov ecx, dword ptr ds : [edi+0x98]
        test ecx, ecx
        jne public_5982ee
        xor eax, eax
        jmp public_5982f9
        public_5982ee : nop
        mov eax, dword ptr ds : [edi+0x9C]
        sub eax, ecx
        sar eax, 2
        public_5982f9 : nop
        dec eax
        cmp ebx, eax
        jae public_59830d
        mov eax, dword ptr ds : [edi+0x98]
        fld dword ptr ds : [eax+ebx*4]
        fsub dword ptr ds : [eax+ebx*4+4]
        jmp public_59831c
        public_59830d : nop
        mov edx, dword ptr ds : [edi+0x98]
        fld dword ptr ds : [edx+ebx*4]
        fadd dword ptr ds : [edi+0x80]
        public_59831c : nop
        mov ebx, dword ptr ss : [esp+0xC0]
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, ebx
        cmp ecx, eax
        jae public_59846b
        public_598335 : nop
        lea ecx, ds:[edi+0x94]
        call public_5ad970
        cmp dword ptr ss : [esp+0x10], eax
        jae public_59837b
        mov ecx, ebp
        call public_5ad970
        cmp ebx, eax
        jae public_59837b
        mov ecx, ebp
        call public_5ad970
        mov esi, eax
        imul esi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edi+0x84]
        add esi, ebx
        call public_5ad970
        cmp esi, eax
        jae public_59837b
        mov ecx, dword ptr ds : [edi+0x88]
        lea esi, ds:[ecx+esi*4]
        jmp public_59837d
        public_59837b : nop
        xor esi, esi
        public_59837d : nop
        cmp dword ptr ds : [esi], 0
        je public_59845a
        lea ecx, ss:[esp+0x24]
        call public_4215b0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi+0x98]
        mov ecx, dword ptr ds : [edi+0xA8]
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        fld dword ptr ds : [edx+eax*4]
        fld dword ptr ds : [ecx+ebx*4]
        mov eax, dword ptr ds : [public_67da38]
        test eax, eax
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x50], 0
        fstp dword ptr ss : [esp+0x4C]
        jne public_5983e0
        call public_5b73e0
        mov dword ptr ds : [public_67da38], eax
        public_5983e0 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ds:[edi+0x3C]
        push ecx
        lea ecx, ss:[esp+0x5C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ss:[esp+0x88]
        call public_406880
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x84]
        push edx
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_59841f
        xor ecx, ecx
        jmp public_598427
        public_59841f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        sar ecx, 2
        public_598427 : nop
        mov eax, dword ptr ds : [edi+0xA8]
        dec ecx
        cmp ebx, ecx
        jae public_598438
        fld dword ptr ds : [eax+ebx*4+4]
        jmp public_59843b
        public_598438 : nop
        fld dword ptr ds : [edi+0x7C]
        public_59843b : nop
        fsub dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_579cc0
        mov ecx, dword ptr ds : [esi]
        call public_579e90
        public_59845a : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc ebx
        cmp ebx, eax
        jb public_598335
        mov esi, dword ptr ss : [esp+0x20]
        public_59846b : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        jb public_5982d6
        public_59847c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 0x10
        UNREACHABLE_TRAP(0x598210)
    }
}

#undef public_598288
#undef public_598293
#undef public_598297
#undef public_5982b1
#undef public_5982b3
#undef public_5982d6
#undef public_5982e0
#undef public_5982ee
#undef public_5982f9
#undef public_59830d
#undef public_59831c
#undef public_598335
#undef public_59837b
#undef public_59837d
#undef public_5983e0
#undef public_59841f
#undef public_598427
#undef public_598438
#undef public_59843b
#undef public_59845a
#undef public_59846b
#undef public_59847c
