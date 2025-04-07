#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627250);
CLANG_FORWARD_PROC_SYMBOL(public_66276b0);
CLANG_FORWARD_PROC_SYMBOL(public_66276c0);
CLANG_FORWARD_PROC_SYMBOL(public_66277c0);
CLANG_FORWARD_PROC_SYMBOL(public_66277d0);
CLANG_FORWARD_PROC_SYMBOL(public_6627fc0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_662727c _public_662727c
#define public_6627296 _public_6627296
#define public_66272a1 _public_66272a1
#define public_66272aa _public_66272aa
#define public_66272b5 _public_66272b5
#define public_66272d5 _public_66272d5
#define public_66272ec _public_66272ec
#define public_66272f9 _public_66272f9
#define public_6627304 _public_6627304
#define public_6627307 _public_6627307
#define public_6627321 _public_6627321
#define public_662732c _public_662732c
#define public_662732f _public_662732f
#define public_6627347 _public_6627347
#define public_6627351 _public_6627351
#define public_662735b _public_662735b
#define public_662735d _public_662735d
#define public_6627376 _public_6627376
#define public_6627381 _public_6627381
#define public_662738c _public_662738c
#define public_662738f _public_662738f
#define public_66273a5 _public_66273a5
#define public_66273e6 _public_66273e6
#define public_66273f9 _public_66273f9
#define public_6627404 _public_6627404
#define public_6627407 _public_6627407
#define public_6627412 _public_6627412
#define public_6627427 _public_6627427
#define public_6627450 _public_6627450
#define public_662746a _public_662746a
#define public_6627491 _public_6627491
#define public_66274a4 _public_66274a4
#define public_66274b1 _public_66274b1
#define public_66274b3 _public_66274b3
#define public_66274be _public_66274be
#define public_66274d7 _public_66274d7
#define public_66274ef _public_66274ef
#define public_66274fc _public_66274fc
#define public_66274fe _public_66274fe
#define public_662750a _public_662750a
#define public_6627536 _public_6627536
#define public_662754e _public_662754e
#define public_662755e _public_662755e
#define public_6627568 _public_6627568
#define public_662758d _public_662758d
#define public_66275a0 _public_66275a0
#define public_66275ab _public_66275ab
#define public_66275ae _public_66275ae
#define public_66275b8 _public_66275b8
#define public_66275e3 _public_66275e3
#define public_66275f6 _public_66275f6
#define public_6627603 _public_6627603
#define public_6627605 _public_6627605
#define public_6627608 _public_6627608
#define public_662760b _public_662760b
#define public_662760f _public_662760f
#define public_662761f _public_662761f
#define public_6627672 _public_6627672

PROC_DECLARE(0x6627250, internal_6627250, public_6627250);
extern "C" NAKED register_t __cdecl internal_6627250()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x18], edi
        call public_66277d0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        mov ebp, esi
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6627296
        mov eax, dword ptr ds : [esi+8]
        public_662727c : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6627321
        mov dword ptr ds : [ecx+4], eax
        jmp public_662732f
        public_6627296 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_66272a1
        mov eax, edx
        jmp public_662727c
        public_66272a1 : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_66272b5
        public_66272aa : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_66272aa
        public_66272b5 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov ebp, ecx
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ebp
        je public_662727c
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_66272d5
        mov dword ptr ds : [eax+4], ecx
        jmp public_66272ec
        public_66272d5 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_66272ec : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_66272f9
        mov dword ptr ds : [edx+4], ecx
        jmp public_6627307
        public_66272f9 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6627304
        mov dword ptr ds : [edx], ecx
        jmp public_6627307
        public_6627304 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6627307 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ebp, esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], ebp
        jmp public_662738f
        public_6627321 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_662732c
        mov dword ptr ds : [ecx], eax
        jmp public_662732f
        public_662732c : nop
        mov dword ptr ds : [ecx+8], eax
        public_662732f : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ebx], esi
        jne public_662735d
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        jne public_6627347
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx], ecx
        jmp public_662735d
        public_6627347 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        cmp byte ptr ds : [ecx+0x1D], 0
        jne public_662735b
        public_6627351 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        cmp byte ptr ds : [ecx+0x1D], 0
        je public_6627351
        public_662735b : nop
        mov dword ptr ds : [ebx], edx
        public_662735d : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ebx+8], esi
        jne public_662738f
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        jne public_6627376
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_662738f
        public_6627376 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        cmp byte ptr ds : [ecx+0x1D], 0
        jne public_662738c
        public_6627381 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        cmp byte ptr ds : [ecx+0x1D], 0
        je public_6627381
        public_662738c : nop
        mov dword ptr ds : [ebx+8], edx
        public_662738f : nop
        cmp byte ptr ss : [ebp+0x1C], 1
        jne public_662760f
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_662760b
        public_66273a5 : nop
        cmp byte ptr ds : [eax+0x1C], 1
        jne public_662760b
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_662746a
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6627412
        mov byte ptr ds : [ecx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_66273e6
        mov dword ptr ds : [esi+4], ecx
        public_66273e6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66273f9
        mov dword ptr ds : [esi+4], edx
        jmp public_6627407
        public_66273f9 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6627404
        mov dword ptr ds : [esi], edx
        jmp public_6627407
        public_6627404 : nop
        mov dword ptr ds : [esi+8], edx
        public_6627407 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6627412 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_6627427
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], 1
        je public_66274d7
        public_6627427 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_662750a
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6627450
        mov dword ptr ds : [esi+4], ecx
        public_6627450 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66274ef
        mov dword ptr ds : [esi+4], edx
        jmp public_66274fe
        public_662746a : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_66274be
        mov byte ptr ds : [ecx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6627491
        mov dword ptr ds : [esi+4], ecx
        public_6627491 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66274a4
        mov dword ptr ds : [esi+4], edx
        jmp public_66274b3
        public_66274a4 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66274b1
        mov dword ptr ds : [esi+8], edx
        jmp public_66274b3
        public_66274b1 : nop
        mov dword ptr ds : [esi], edx
        public_66274b3 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_66274be : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_6627568
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_6627568
        public_66274d7 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66273a5
        jmp public_662760b
        public_66274ef : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66274fc
        mov dword ptr ds : [esi+8], edx
        jmp public_66274fe
        public_66274fc : nop
        mov dword ptr ds : [esi], edx
        public_66274fe : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_662750a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6627536
        mov dword ptr ds : [esi+4], ecx
        public_6627536 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov edi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_662754e
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6627608
        public_662754e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_662755e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6627608
        public_662755e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6627608
        public_6627568 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_66275b8
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_662758d
        mov dword ptr ds : [esi+4], ecx
        public_662758d : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66275a0
        mov dword ptr ds : [esi+4], edx
        jmp public_66275ae
        public_66275a0 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_66275ab
        mov dword ptr ds : [esi], edx
        jmp public_66275ae
        public_66275ab : nop
        mov dword ptr ds : [esi+8], edx
        public_66275ae : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_66275b8 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_66275e3
        mov dword ptr ds : [esi+4], ecx
        public_66275e3 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov edi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_66275f6
        mov dword ptr ds : [edi+4], edx
        jmp public_6627605
        public_66275f6 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6627603
        mov dword ptr ds : [esi+8], edx
        jmp public_6627605
        public_6627603 : nop
        mov dword ptr ds : [esi], edx
        public_6627605 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6627608 : nop
        mov dword ptr ds : [ecx+4], edx
        public_662760b : nop
        mov byte ptr ds : [eax+0x1C], 1
        public_662760f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+0x14]
        lea ebp, ds:[edx+0x10]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6627672
        public_662761f : nop
        push edi
        mov esi, edi
        call public_66276c0
        mov edi, dword ptr ds : [eax]
        add esp, 4
        lea eax, ss:[esp+0x1C]
        lea ecx, ss:[esp+0x14]
        push 0
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call public_66276b0
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax+4], ecx
        call public_6627fc0
        add esp, 4
        mov ecx, ebp
        push 1
        push esi
        call public_66277c0
        mov ecx, dword ptr ss : [ebp+8]
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [ebp+8], ecx
        jne public_662761f
        public_6627672 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_66281d0
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        push ecx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        call public_66281d0
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        mov ecx, dword ptr ds : [eax+0x10]
        dec ecx
        pop edi
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ss : [esp+0x20]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6627250)
    }
}

#undef public_662727c
#undef public_6627296
#undef public_66272a1
#undef public_66272aa
#undef public_66272b5
#undef public_66272d5
#undef public_66272ec
#undef public_66272f9
#undef public_6627304
#undef public_6627307
#undef public_6627321
#undef public_662732c
#undef public_662732f
#undef public_6627347
#undef public_6627351
#undef public_662735b
#undef public_662735d
#undef public_6627376
#undef public_6627381
#undef public_662738c
#undef public_662738f
#undef public_66273a5
#undef public_66273e6
#undef public_66273f9
#undef public_6627404
#undef public_6627407
#undef public_6627412
#undef public_6627427
#undef public_6627450
#undef public_662746a
#undef public_6627491
#undef public_66274a4
#undef public_66274b1
#undef public_66274b3
#undef public_66274be
#undef public_66274d7
#undef public_66274ef
#undef public_66274fc
#undef public_66274fe
#undef public_662750a
#undef public_6627536
#undef public_662754e
#undef public_662755e
#undef public_6627568
#undef public_662758d
#undef public_66275a0
#undef public_66275ab
#undef public_66275ae
#undef public_66275b8
#undef public_66275e3
#undef public_66275f6
#undef public_6627603
#undef public_6627605
#undef public_6627608
#undef public_662760b
#undef public_662760f
#undef public_662761f
#undef public_6627672
