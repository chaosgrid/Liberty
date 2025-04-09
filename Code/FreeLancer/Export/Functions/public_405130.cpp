#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4032a0);
CLANG_FORWARD_PROC_SYMBOL(public_405130);
CLANG_FORWARD_PROC_SYMBOL(public_4f3770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_405154 _public_405154
#define public_405172 _public_405172
#define public_40517d _public_40517d
#define public_405186 _public_405186
#define public_405191 _public_405191
#define public_4051ad _public_4051ad
#define public_4051c4 _public_4051c4
#define public_4051d1 _public_4051d1
#define public_4051dc _public_4051dc
#define public_4051df _public_4051df
#define public_4051f7 _public_4051f7
#define public_405202 _public_405202
#define public_405205 _public_405205
#define public_40521a _public_40521a
#define public_405225 _public_405225
#define public_405230 _public_405230
#define public_405233 _public_405233
#define public_405247 _public_405247
#define public_405253 _public_405253
#define public_40525f _public_40525f
#define public_405262 _public_405262
#define public_405280 _public_405280
#define public_4052bf _public_4052bf
#define public_4052d2 _public_4052d2
#define public_4052dd _public_4052dd
#define public_4052e0 _public_4052e0
#define public_4052eb _public_4052eb
#define public_4052fe _public_4052fe
#define public_405325 _public_405325
#define public_40533f _public_40533f
#define public_405365 _public_405365
#define public_405378 _public_405378
#define public_405385 _public_405385
#define public_405387 _public_405387
#define public_405392 _public_405392
#define public_4053a9 _public_4053a9
#define public_4053c1 _public_4053c1
#define public_4053ce _public_4053ce
#define public_4053d0 _public_4053d0
#define public_4053dc _public_4053dc
#define public_405406 _public_405406
#define public_40541e _public_40541e
#define public_40542e _public_40542e
#define public_405438 _public_405438
#define public_40545b _public_40545b
#define public_40546e _public_40546e
#define public_405479 _public_405479
#define public_40547c _public_40547c
#define public_405486 _public_405486
#define public_4054af _public_4054af
#define public_4054c2 _public_4054c2
#define public_4054cf _public_4054cf
#define public_4054d1 _public_4054d1
#define public_4054d4 _public_4054d4
#define public_4054d7 _public_4054d7
#define public_4054de _public_4054de

PROC_DECLARE(0x405130, internal_405130, public_405130);
extern "C" NAKED register_t __cdecl internal_405130()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_4f3770
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_405172
        mov eax, dword ptr ds : [esi+8]
        public_405154 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4051f7
        mov dword ptr ds : [ecx+4], eax
        jmp public_405205
        public_405172 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_40517d
        mov eax, edx
        jmp public_405154
        public_40517d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_405191
        public_405186 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_405186
        public_405191 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_405154
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4051ad
        mov dword ptr ds : [eax+4], ecx
        jmp public_4051c4
        public_4051ad : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_4051c4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4051d1
        mov dword ptr ds : [edx+4], ecx
        jmp public_4051df
        public_4051d1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4051dc
        mov dword ptr ds : [edx], ecx
        jmp public_4051df
        public_4051dc : nop
        mov dword ptr ds : [edx+8], ecx
        public_4051df : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x44]
        mov dl, byte ptr ds : [ecx+0x44]
        mov byte ptr ds : [ecx+0x44], bl
        mov byte ptr ds : [esi+0x44], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_405262
        public_4051f7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_405202
        mov dword ptr ds : [ecx], eax
        jmp public_405205
        public_405202 : nop
        mov dword ptr ds : [ecx+8], eax
        public_405205 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_405233
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_40521a
        mov edx, dword ptr ds : [esi+4]
        jmp public_405230
        public_40521a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        mov edx, eax
        jne public_405230
        public_405225 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        je public_405225
        public_405230 : nop
        mov dword ptr ss : [ebp], edx
        public_405233 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_405262
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_405247
        mov edx, dword ptr ds : [esi+4]
        jmp public_40525f
        public_405247 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        mov edx, eax
        jne public_40525f
        public_405253 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        je public_405253
        public_40525f : nop
        mov dword ptr ss : [ebp+8], edx
        public_405262 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x44]
        mov bl, 1
        cmp cl, bl
        jne public_4054de
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_4054d7
        nop 
        public_405280 : nop
        cmp byte ptr ds : [eax+0x44], bl
        jne public_4054d7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_40533f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_4052eb
        mov byte ptr ds : [ecx+0x44], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4052bf
        mov dword ptr ds : [esi+4], ecx
        public_4052bf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4052d2
        mov dword ptr ds : [esi+4], edx
        jmp public_4052e0
        public_4052d2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4052dd
        mov dword ptr ds : [esi], edx
        jmp public_4052e0
        public_4052dd : nop
        mov dword ptr ds : [esi+8], edx
        public_4052e0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4052eb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_4052fe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        je public_4053a9
        public_4052fe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_4053dc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x44], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x44], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_405325
        mov dword ptr ds : [esi+4], ecx
        public_405325 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4053c1
        mov dword ptr ds : [esi+4], edx
        jmp public_4053d0
        public_40533f : nop
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_405392
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_405365
        mov dword ptr ds : [esi+4], ecx
        public_405365 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_405378
        mov dword ptr ds : [esi+4], edx
        jmp public_405387
        public_405378 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_405385
        mov dword ptr ds : [esi+8], edx
        jmp public_405387
        public_405385 : nop
        mov dword ptr ds : [esi], edx
        public_405387 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_405392 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_405438
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_405438
        public_4053a9 : nop
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_405280
        jmp public_4054d7
        public_4053c1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4053ce
        mov dword ptr ds : [esi+8], edx
        jmp public_4053d0
        public_4053ce : nop
        mov dword ptr ds : [esi], edx
        public_4053d0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4053dc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x44]
        mov byte ptr ds : [ecx+0x44], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_405406
        mov dword ptr ds : [esi+4], ecx
        public_405406 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_40541e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4054d4
        public_40541e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_40542e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4054d4
        public_40542e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4054d4
        public_405438 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_405486
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x44], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x44], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_40545b
        mov dword ptr ds : [esi+4], ecx
        public_40545b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_40546e
        mov dword ptr ds : [esi+4], edx
        jmp public_40547c
        public_40546e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_405479
        mov dword ptr ds : [esi], edx
        jmp public_40547c
        public_405479 : nop
        mov dword ptr ds : [esi+8], edx
        public_40547c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_405486 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x44]
        mov byte ptr ds : [ecx+0x44], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4054af
        mov dword ptr ds : [esi+4], ecx
        public_4054af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4054c2
        mov dword ptr ds : [esi+4], edx
        jmp public_4054d1
        public_4054c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4054cf
        mov dword ptr ds : [esi+8], edx
        jmp public_4054d1
        public_4054cf : nop
        mov dword ptr ds : [esi], edx
        public_4054d1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4054d4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_4054d7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x44], bl
        public_4054de : nop
        lea ecx, ds:[esi+0xC]
        call public_4032a0
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x405130)
    }
}

#undef public_405154
#undef public_405172
#undef public_40517d
#undef public_405186
#undef public_405191
#undef public_4051ad
#undef public_4051c4
#undef public_4051d1
#undef public_4051dc
#undef public_4051df
#undef public_4051f7
#undef public_405202
#undef public_405205
#undef public_40521a
#undef public_405225
#undef public_405230
#undef public_405233
#undef public_405247
#undef public_405253
#undef public_40525f
#undef public_405262
#undef public_405280
#undef public_4052bf
#undef public_4052d2
#undef public_4052dd
#undef public_4052e0
#undef public_4052eb
#undef public_4052fe
#undef public_405325
#undef public_40533f
#undef public_405365
#undef public_405378
#undef public_405385
#undef public_405387
#undef public_405392
#undef public_4053a9
#undef public_4053c1
#undef public_4053ce
#undef public_4053d0
#undef public_4053dc
#undef public_405406
#undef public_40541e
#undef public_40542e
#undef public_405438
#undef public_40545b
#undef public_40546e
#undef public_405479
#undef public_40547c
#undef public_405486
#undef public_4054af
#undef public_4054c2
#undef public_4054cf
#undef public_4054d1
#undef public_4054d4
#undef public_4054d7
#undef public_4054de
