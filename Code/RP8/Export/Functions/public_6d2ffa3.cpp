#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2fd77);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ff1d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ffa3);

#define public_6d2ffc8 _public_6d2ffc8
#define public_6d2ffd2 _public_6d2ffd2
#define public_6d30012 _public_6d30012
#define public_6d30037 _public_6d30037
#define public_6d3003e _public_6d3003e
#define public_6d30045 _public_6d30045
#define public_6d3004e _public_6d3004e
#define public_6d30060 _public_6d30060
#define public_6d3006f _public_6d3006f
#define public_6d30091 _public_6d30091
#define public_6d30094 _public_6d30094
#define public_6d30099 _public_6d30099
#define public_6d3009e _public_6d3009e
#define public_6d300cd _public_6d300cd
#define public_6d300d4 _public_6d300d4
#define public_6d300e3 _public_6d300e3
#define public_6d30106 _public_6d30106
#define public_6d3010b _public_6d3010b
#define public_6d3010e _public_6d3010e
#define public_6d3011b _public_6d3011b
#define public_6d3011d _public_6d3011d
#define public_6d3012d _public_6d3012d
#define public_6d3014e _public_6d3014e
#define public_6d30153 _public_6d30153
#define public_6d30156 _public_6d30156
#define public_6d30161 _public_6d30161
#define public_6d30163 _public_6d30163
#define public_6d30179 _public_6d30179
#define public_6d30190 _public_6d30190
#define public_6d30192 _public_6d30192
#define public_6d301af _public_6d301af
#define public_6d301bc _public_6d301bc
#define public_6d301cd _public_6d301cd
#define public_6d301e6 _public_6d301e6
#define public_6d301f6 _public_6d301f6
#define public_6d30203 _public_6d30203
#define public_6d30206 _public_6d30206
#define public_6d30220 _public_6d30220
#define public_6d30230 _public_6d30230
#define public_6d3023f _public_6d3023f
#define public_6d30241 _public_6d30241
#define public_6d30251 _public_6d30251
#define public_6d30261 _public_6d30261
#define public_6d30271 _public_6d30271
#define public_6d3027e _public_6d3027e
#define public_6d30280 _public_6d30280
#define public_6d30281 _public_6d30281

PROC_DECLARE(0x6d2ffa3, internal_6d2ffa3, public_6d2ffa3);
extern "C" NAKED register_t __cdecl internal_6d2ffa3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x64
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        xor ebx, ebx
        cmp esi, ebx
        je public_6d2ffc8
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x28]
        mov dword ptr ss : [ebp-0x10], eax
        sub eax, 3
        je public_6d2ffd2
        dec eax
        je public_6d2ffd2
        dec eax
        je public_6d2ffd2
        public_6d2ffc8 : nop
        mov eax, 0x8876086C
        jmp public_6d30281
        public_6d2ffd2 : nop
        cmp dword ptr ss : [ebp+0x14], 0xFFFFFFFF
        push edi
        push 5
        mov dword ptr ss : [ebp-0x18], esi
        pop edi
        jne public_6d30045
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 3
        je public_6d3006f
        dec eax
        je public_6d30012
        dec eax
        jne public_6d30094
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0x44]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [ebp-0x2C]
        lea ecx, ds:[eax-1]
        test eax, ecx
        jne public_6d3003e
        mov eax, dword ptr ss : [ebp-0x28]
        jmp public_6d30037
        public_6d30012 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0x64]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [ebp-0x50]
        lea ecx, ds:[eax-1]
        test eax, ecx
        jne public_6d3003e
        mov eax, dword ptr ss : [ebp-0x4C]
        lea ecx, ds:[eax-1]
        test eax, ecx
        jne public_6d3003e
        mov eax, dword ptr ss : [ebp-0x48]
        public_6d30037 : nop
        lea ecx, ds:[eax-1]
        test eax, ecx
        je public_6d30099
        public_6d3003e : nop
        mov dword ptr ss : [ebp+0x14], 0x80004
        public_6d30045 : nop
        cmp dword ptr ss : [ebp-0x10], edi
        jne public_6d3004e
        or byte ptr ss : [ebp+0x16], 7
        public_6d3004e : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        cmp dword ptr ss : [ebp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x20], eax
        jne public_6d30060
        mov dword ptr ss : [ebp+0x10], ebx
        public_6d30060 : nop
        cmp dword ptr ss : [ebp+0x10], eax
        jb public_6d3009e
        mov eax, 0x8876086C
        jmp public_6d30280
        public_6d3006f : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0x44]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [ebp-0x2C]
        lea ecx, ds:[eax-1]
        test eax, ecx
        jne public_6d30091
        mov eax, dword ptr ss : [ebp-0x28]
        lea ecx, ds:[eax-1]
        test eax, ecx
        je public_6d30099
        public_6d30091 : nop
        mov dword ptr ss : [ebp+0x14], ebx
        public_6d30094 : nop
        cmp dword ptr ss : [ebp+0x14], ebx
        je public_6d3003e
        public_6d30099 : nop
        mov dword ptr ss : [ebp+0x14], edi
        jmp public_6d30045
        public_6d3009e : nop
        xor eax, eax
        cmp dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp+8], ebx
        setne al
        mov dword ptr ss : [ebp-8], ebx
        mov dword ptr ss : [ebp-4], ebx
        mov dword ptr ss : [ebp-0xC], ebx
        dec eax
        and eax, edi
        inc eax
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ss : [ebp+0x14]
        and eax, 0xFF
        cmp eax, 2
        je public_6d300cd
        cmp eax, edi
        mov dword ptr ss : [ebp-0x1C], ebx
        jne public_6d300d4
        public_6d300cd : nop
        mov dword ptr ss : [ebp-0x1C], 1
        public_6d300d4 : nop
        cmp dword ptr ss : [ebp-0x24], ebx
        mov dword ptr ss : [ebp-0x14], ebx
        jbe public_6d3023f
        mov esi, dword ptr ss : [ebp+0x14]
        public_6d300e3 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 3
        je public_6d3010b
        dec eax
        je public_6d30106
        dec eax
        jne public_6d3011d
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+8]
        push edx
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp-0x14]
        push eax
        call dword ptr ds : [ecx+0x3C]
        jmp public_6d3011b
        public_6d30106 : nop
        lea edx, ss:[ebp-8]
        jmp public_6d3010e
        public_6d3010b : nop
        lea edx, ss:[ebp+8]
        public_6d3010e : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        push dword ptr ss : [ebp+0x10]
        push eax
        call dword ptr ds : [ecx+0x3C]
        public_6d3011b : nop
        mov esi, eax
        public_6d3011d : nop
        cmp esi, ebx
        jl public_6d30241
        mov edi, dword ptr ss : [ebp+0x10]
        jmp public_6d30206
        public_6d3012d : nop
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 3
        je public_6d30153
        dec eax
        je public_6d3014e
        dec eax
        jne public_6d30163
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-4]
        push edx
        push edi
        push dword ptr ss : [ebp-0x14]
        push eax
        call dword ptr ds : [ecx+0x3C]
        jmp public_6d30161
        public_6d3014e : nop
        lea edx, ss:[ebp-0xC]
        jmp public_6d30156
        public_6d30153 : nop
        lea edx, ss:[ebp-4]
        public_6d30156 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        push edi
        push eax
        call dword ptr ds : [ecx+0x3C]
        public_6d30161 : nop
        mov esi, eax
        public_6d30163 : nop
        cmp esi, ebx
        jl public_6d30241
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 3
        je public_6d30179
        dec eax
        je public_6d301cd
        dec eax
        jne public_6d30192
        public_6d30179 : nop
        push ebx
        push dword ptr ss : [ebp+0x14]
        push ebx
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        push ebx
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-4]
        call public_6d2fd77
        public_6d30190 : nop
        mov esi, eax
        public_6d30192 : nop
        cmp esi, ebx
        jl public_6d30241
        cmp dword ptr ss : [ebp-0x1C], ebx
        je public_6d301e6
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_6d301af
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+8], ebx
        public_6d301af : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, ebx
        je public_6d301bc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6d301bc : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], ebx
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d30203
        public_6d301cd : nop
        push ebx
        push dword ptr ss : [ebp+0x14]
        push ebx
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-8]
        push ebx
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-0xC]
        call public_6d2ff1d
        jmp public_6d30190
        public_6d301e6 : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, ebx
        je public_6d301f6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], ebx
        public_6d301f6 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, ebx
        je public_6d30206
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6d30203 : nop
        mov dword ptr ss : [ebp-0xC], ebx
        public_6d30206 : nop
        inc edi
        cmp edi, dword ptr ss : [ebp-0x20]
        jb public_6d3012d
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_6d30220
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+8], ebx
        public_6d30220 : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, ebx
        je public_6d30230
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-8], ebx
        public_6d30230 : nop
        inc dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x14]
        cmp eax, dword ptr ss : [ebp-0x24]
        jb public_6d300e3
        public_6d3023f : nop
        xor esi, esi
        public_6d30241 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_6d30251
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+8], ebx
        public_6d30251 : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, ebx
        je public_6d30261
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-8], ebx
        public_6d30261 : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, ebx
        je public_6d30271
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], ebx
        public_6d30271 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, ebx
        je public_6d3027e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6d3027e : nop
        mov eax, esi
        public_6d30280 : nop
        pop edi
        public_6d30281 : nop
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d2ffa3)
    }
}

#undef public_6d2ffc8
#undef public_6d2ffd2
#undef public_6d30012
#undef public_6d30037
#undef public_6d3003e
#undef public_6d30045
#undef public_6d3004e
#undef public_6d30060
#undef public_6d3006f
#undef public_6d30091
#undef public_6d30094
#undef public_6d30099
#undef public_6d3009e
#undef public_6d300cd
#undef public_6d300d4
#undef public_6d300e3
#undef public_6d30106
#undef public_6d3010b
#undef public_6d3010e
#undef public_6d3011b
#undef public_6d3011d
#undef public_6d3012d
#undef public_6d3014e
#undef public_6d30153
#undef public_6d30156
#undef public_6d30161
#undef public_6d30163
#undef public_6d30179
#undef public_6d30190
#undef public_6d30192
#undef public_6d301af
#undef public_6d301bc
#undef public_6d301cd
#undef public_6d301e6
#undef public_6d301f6
#undef public_6d30203
#undef public_6d30206
#undef public_6d30220
#undef public_6d30230
#undef public_6d3023f
#undef public_6d30241
#undef public_6d30251
#undef public_6d30261
#undef public_6d30271
#undef public_6d3027e
#undef public_6d30280
#undef public_6d30281
