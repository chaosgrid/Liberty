#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_470040);

#define public_470055 _public_470055
#define public_47006d _public_47006d
#define public_470083 _public_470083
#define public_470090 _public_470090
#define public_4700a9 _public_4700a9
#define public_4700b0 _public_4700b0
#define public_4700e4 _public_4700e4
#define public_4700e9 _public_4700e9
#define public_470114 _public_470114
#define public_470119 _public_470119
#define public_470155 _public_470155
#define public_47017f _public_47017f
#define public_47018f _public_47018f
#define public_470193 _public_470193
#define public_4701b0 _public_4701b0
#define public_4701f4 _public_4701f4
#define public_4701f9 _public_4701f9
#define public_470224 _public_470224
#define public_470229 _public_470229
#define public_470238 _public_470238
#define public_470265 _public_470265
#define public_47026b _public_47026b
#define public_470295 _public_470295
#define public_4702a5 _public_4702a5
#define public_4702b0 _public_4702b0
#define public_4702c9 _public_4702c9
#define public_4702d0 _public_4702d0
#define public_470304 _public_470304
#define public_470309 _public_470309
#define public_470334 _public_470334
#define public_470339 _public_470339
#define public_470387 _public_470387
#define public_47038c _public_47038c
#define public_4703b7 _public_4703b7
#define public_4703bc _public_4703bc
#define public_4703c9 _public_4703c9
#define public_4703cb _public_4703cb
#define public_4703f8 _public_4703f8
#define public_470422 _public_470422
#define public_470432 _public_470432
#define public_470436 _public_470436
#define public_470450 _public_470450
#define public_470469 _public_470469
#define public_470470 _public_470470
#define public_47047a _public_47047a
#define public_4704aa _public_4704aa
#define public_4704c4 _public_4704c4

PROC_DECLARE(0x470040, internal_470040, public_470040);
extern "C" NAKED register_t __cdecl internal_470040()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_66dac0]
        test ebp, ebp
        push esi
        push edi
        jne public_470055
        xor edx, edx
        jmp public_47006d
        public_470055 : nop
        mov ecx, dword ptr ds : [public_66dac4]
        sub ecx, ebp
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_47006d : nop
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, 2
        jne public_47017f
        lea eax, ds:[edx-1]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_470090
        public_470083 : nop
        mov ebp, dword ptr ds : [public_66dac0]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_470090 : nop
        test eax, eax
        mov byte ptr ss : [esp+0x38], 1
        jle public_4704c4
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_4700b0
        public_4700a9 : nop
        mov ebp, dword ptr ds : [public_66dac0]
        nop 
        public_4700b0 : nop
        mov ecx, dword ptr ds : [ebx+ebp+0xC]
        lea esi, ds:[ebx+ebp+0xC]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        mov ecx, offset public_66daa4
        lea edi, ds:[ebx+ebp]
        call public_432240
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ds : [public_66daa8]
        je public_4700e4
        mov ebp, dword ptr ds : [eax+0x10]
        jmp public_4700e9
        public_4700e4 : nop
        mov ebp, offset public_5d0214
        public_4700e9 : nop
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        mov ecx, offset public_66daa4
        call public_432240
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [public_66daa8]
        je public_470114
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_470119
        public_470114 : nop
        mov eax, offset public_5d0214
        public_470119 : nop
        push ebp
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        jle public_470155
        mov edx, edi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov ebx, esi
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+8], ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov byte ptr ss : [esp+0x38], 0
        public_470155 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add ebx, 0xC
        dec eax
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], eax
        jne public_4700a9
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_470083
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 
        public_47017f : nop
        cmp eax, 1
        jne public_470295
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_470193
        public_47018f : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_470193 : nop
        test edx, edx
        mov byte ptr ss : [esp+0x38], 1
        jle public_4704c4
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], edx
        lea ebx, ds:[ebx]
        public_4701b0 : nop
        mov eax, dword ptr ds : [ebx+ebp+4]
        mov ecx, dword ptr ds : [ebx+ebp+0x10]
        cmp eax, ecx
        lea esi, ds:[ebx+ebp]
        lea edi, ds:[ebx+ebp+0xC]
        jg public_47026b
        jl public_470238
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, offset public_66daa4
        mov dword ptr ss : [esp+0x30], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [public_66daa8]
        je public_4701f4
        mov ebp, dword ptr ds : [eax+0x10]
        jmp public_4701f9
        public_4701f4 : nop
        mov ebp, offset public_5d0214
        public_4701f9 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66daa4
        mov dword ptr ss : [esp+0x28], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_66daa8]
        je public_470224
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_470229
        public_470224 : nop
        mov eax, offset public_5d0214
        public_470229 : nop
        push ebp
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        jle public_470265
        public_470238 : nop
        mov edx, esi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov ebx, edi
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+4], ebp
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        mov byte ptr ss : [esp+0x38], 0
        public_470265 : nop
        mov ebp, dword ptr ds : [public_66dac0]
        public_47026b : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 0xC
        dec eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], eax
        jne public_4701b0
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_47018f
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 
        public_470295 : nop
        cmp eax, 3
        jne public_470422
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_4702b0
        public_4702a5 : nop
        mov ebp, dword ptr ds : [public_66dac0]
        mov edx, dword ptr ss : [esp+0x10]
        nop 
        public_4702b0 : nop
        test edx, edx
        mov byte ptr ss : [esp+0x38], 1
        jle public_4704c4
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], edx
        jmp public_4702d0
        public_4702c9 : nop
        mov ebp, dword ptr ds : [public_66dac0]
        nop 
        public_4702d0 : nop
        mov eax, dword ptr ds : [ebx+ebp+0xC]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea esi, ds:[ebx+ebp+0xC]
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, offset public_66da90
        lea edi, ds:[ebx+ebp]
        mov dword ptr ss : [esp+0x30], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [public_66da94]
        je public_470304
        mov ebp, dword ptr ds : [eax+0x10]
        jmp public_470309
        public_470304 : nop
        mov ebp, offset public_5d0214
        public_470309 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66da90
        mov dword ptr ss : [esp+0x28], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_66da94]
        je public_470334
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_470339
        public_470334 : nop
        mov eax, offset public_5d0214
        public_470339 : nop
        push ebp
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        jne public_4703c9
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        jg public_4703f8
        jl public_4703cb
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, offset public_66daa4
        mov dword ptr ss : [esp+0x30], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [public_66daa8]
        je public_470387
        mov ebp, dword ptr ds : [eax+0x10]
        jmp public_47038c
        public_470387 : nop
        mov ebp, offset public_5d0214
        public_47038c : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, offset public_66daa4
        mov dword ptr ss : [esp+0x28], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [public_66daa8]
        je public_4703b7
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_4703bc
        public_4703b7 : nop
        mov eax, offset public_5d0214
        public_4703bc : nop
        push ebp
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        public_4703c9 : nop
        jle public_4703f8
        public_4703cb : nop
        mov edx, edi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov ebx, esi
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+8], ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov byte ptr ss : [esp+0x38], 0
        public_4703f8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 0xC
        dec eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], eax
        jne public_4702c9
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_4702a5
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 
        public_470422 : nop
        cmp eax, 4
        jne public_4704c4
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_470436
        public_470432 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_470436 : nop
        test edx, edx
        mov bl, 1
        jle public_4704c4
        xor esi, esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x18], edx
        lea ebx, ds:[ebx]
        public_470450 : nop
        mov dl, byte ptr ds : [esi+ebp+8]
        test dl, dl
        lea eax, ds:[esi+ebp]
        lea ecx, ds:[esi+ebp+0xC]
        je public_470469
        cmp byte ptr ds : [ecx+8], 0
        je public_4704aa
        test dl, dl
        jne public_470470
        public_470469 : nop
        mov dl, byte ptr ds : [ecx+8]
        test dl, dl
        jne public_47047a
        public_470470 : nop
        mov edx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ecx+4]
        cmp edx, edi
        jge public_4704aa
        public_47047a : nop
        mov edi, eax
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], ebp
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+8], edi
        mov ebp, dword ptr ds : [public_66dac0]
        xor bl, bl
        public_4704aa : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0xC
        dec eax
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x18], eax
        jne public_470450
        test bl, bl
        je public_470432
        public_4704c4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x470040)
    }
}

#undef public_470055
#undef public_47006d
#undef public_470083
#undef public_470090
#undef public_4700a9
#undef public_4700b0
#undef public_4700e4
#undef public_4700e9
#undef public_470114
#undef public_470119
#undef public_470155
#undef public_47017f
#undef public_47018f
#undef public_470193
#undef public_4701b0
#undef public_4701f4
#undef public_4701f9
#undef public_470224
#undef public_470229
#undef public_470238
#undef public_470265
#undef public_47026b
#undef public_470295
#undef public_4702a5
#undef public_4702b0
#undef public_4702c9
#undef public_4702d0
#undef public_470304
#undef public_470309
#undef public_470334
#undef public_470339
#undef public_470387
#undef public_47038c
#undef public_4703b7
#undef public_4703bc
#undef public_4703c9
#undef public_4703cb
#undef public_4703f8
#undef public_470422
#undef public_470432
#undef public_470436
#undef public_470450
#undef public_470469
#undef public_470470
#undef public_47047a
#undef public_4704aa
#undef public_4704c4
