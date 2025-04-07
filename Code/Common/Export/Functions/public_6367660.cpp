#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366180);
CLANG_FORWARD_PROC_SYMBOL(public_6366c00);
CLANG_FORWARD_PROC_SYMBOL(public_63673a0);
CLANG_FORWARD_PROC_SYMBOL(public_6367410);
CLANG_FORWARD_PROC_SYMBOL(public_6367480);
CLANG_FORWARD_PROC_SYMBOL(public_6367660);
CLANG_FORWARD_PROC_SYMBOL(public_6367800);
CLANG_FORWARD_PROC_SYMBOL(public_6368230);

#define public_6367667 _public_6367667
#define public_6367679 _public_6367679
#define public_636768b _public_636768b
#define public_63676ba _public_63676ba
#define public_63676dc _public_63676dc
#define public_6367711 _public_6367711
#define public_6367735 _public_6367735
#define public_6367739 _public_6367739
#define public_636776a _public_636776a
#define public_6367772 _public_6367772
#define public_636778b _public_636778b
#define public_63677a8 _public_63677a8
#define public_63677c3 _public_63677c3

PROC_DECLARE(0x6367660, internal_6367660, public_6367660);
extern "C" NAKED register_t __cdecl internal_6367660()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        public_6367667 : nop
        mov eax, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0x94], eax
        xor eax, eax
        test ecx, ecx
        jle public_636768b
        public_6367679 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [ecx+eax*4], 0
        mov ecx, dword ptr ds : [esi+0x40]
        inc eax
        cmp eax, ecx
        jl public_6367679
        public_636768b : nop
        mov ecx, esi
        call public_6366c00
        mov ecx, esi
        call public_63673a0
        cmp eax, 1
        jne public_63676dc
        lea ecx, ds:[esi+0x6C]
        mov dword ptr ds : [esi+0x68], 0
        call public_6368230
        mov ecx, dword ptr ds : [esi+0x44]
        xor eax, eax
        test ecx, ecx
        jle public_63677a8
        public_63676ba : nop
        mov edx, dword ptr ds : [esi+0x84]
        mov ecx, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [ecx+eax*4]
        mov edx, dword ptr ds : [edx+eax*4]
        mov edi, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+ecx*4], edx
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, ecx
        jl public_63676ba
        jmp public_63677a8
        public_63676dc : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x68], 2
        call public_6367410
        mov ecx, esi
        call public_6366c00
        mov eax, dword ptr ds : [esi+0x44]
        mov ecx, eax
        add ecx, 3
        and ecx, 0xFFFFFFFC
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0xA0], ecx
        mov eax, dword ptr ds : [esi+0x44]
        xor edx, edx
        test eax, eax
        jle public_6367772
        public_6367711 : nop
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov eax, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov dword ptr ds : [edi+edx*4], eax
        mov edi, dword ptr ds : [esi+0x44]
        xor eax, eax
        test edi, edi
        mov dword ptr ss : [esp+0x10], ecx
        jle public_636776a
        jmp public_6367739
        public_6367735 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6367739 : nop
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [esi+0x34]
        imul ebx, ecx
        mov ecx, dword ptr ds : [edi+eax*4]
        mov edi, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [esi+0xA4]
        add ecx, ebx
        mov ebx, dword ptr ds : [esi+0xA0]
        mov ecx, dword ptr ds : [edi+ecx*4]
        imul ebx, edx
        add ebx, eax
        mov dword ptr ss : [ebp+ebx*4], ecx
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, ecx
        jl public_6367735
        public_636776a : nop
        mov eax, dword ptr ds : [esi+0x44]
        inc edx
        cmp edx, eax
        jl public_6367711
        public_6367772 : nop
        lea ecx, ds:[esi+0x98]
        call public_6366180
        cmp eax, 1
        jne public_63677c3
        mov ecx, dword ptr ds : [esi+0x44]
        xor eax, eax
        test ecx, ecx
        jle public_63677a8
        public_636778b : nop
        mov edx, dword ptr ds : [esi+0xAC]
        mov ecx, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [ecx+eax*4]
        mov edx, dword ptr ds : [edx+eax*4]
        mov edi, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+ecx*4], edx
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, ecx
        jl public_636778b
        public_63677a8 : nop
        mov ecx, esi
        call public_6367480
        mov ecx, esi
        call public_6367800
        test eax, eax
        jg public_6367667
        mov eax, 1
        public_63677c3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6367660)
    }
}

#undef public_6367667
#undef public_6367679
#undef public_636768b
#undef public_63676ba
#undef public_63676dc
#undef public_6367711
#undef public_6367735
#undef public_6367739
#undef public_636776a
#undef public_6367772
#undef public_636778b
#undef public_63677a8
#undef public_63677c3
