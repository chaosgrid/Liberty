#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bac30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62bac60 _public_62bac60
#define public_62bac62 _public_62bac62
#define public_62bac6a _public_62bac6a
#define public_62bac6c _public_62bac6c
#define public_62bac78 _public_62bac78
#define public_62bac92 _public_62bac92
#define public_62bac9e _public_62bac9e
#define public_62baca4 _public_62baca4
#define public_62bacb0 _public_62bacb0
#define public_62bacb9 _public_62bacb9
#define public_62bacc1 _public_62bacc1
#define public_62bacd3 _public_62bacd3
#define public_62bacdf _public_62bacdf
#define public_62bace5 _public_62bace5
#define public_62bad1c _public_62bad1c
#define public_62bad35 _public_62bad35
#define public_62bad50 _public_62bad50
#define public_62bad5c _public_62bad5c
#define public_62bad62 _public_62bad62
#define public_62bad71 _public_62bad71
#define public_62bad7d _public_62bad7d
#define public_62bad81 _public_62bad81
#define public_62bad90 _public_62bad90
#define public_62bad9b _public_62bad9b
#define public_62badb0 _public_62badb0
#define public_62badbc _public_62badbc
#define public_62badc2 _public_62badc2
#define public_62badd0 _public_62badd0
#define public_62baddf _public_62baddf
#define public_62badf0 _public_62badf0
#define public_62badf9 _public_62badf9
#define public_62badfd _public_62badfd
#define public_62bae00 _public_62bae00

PROC_DECLARE(0x62bac30, internal_62bac30, public_62bac30);
extern "C" NAKED register_t __cdecl internal_62bac30()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, eax
        cmp ecx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        jae public_62bad35
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_62bac60
        mov ecx, eax
        sub ecx, edx
        cmp ebx, ecx
        jb public_62bac62
        public_62bac60 : nop
        mov ecx, ebx
        public_62bac62 : nop
        test edx, edx
        jne public_62bac6a
        xor eax, eax
        jmp public_62bac6c
        public_62bac6a : nop
        sub eax, edx
        public_62bac6c : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62bac78
        xor eax, eax
        public_62bac78 : nop
        push eax
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        cmp eax, edi
        je public_62baca4
        public_62bac92 : nop
        test ecx, ecx
        je public_62bac9e
        mov dl, byte ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], dl
        public_62bac9e : nop
        inc ecx
        inc eax
        cmp eax, edi
        jne public_62bac92
        public_62baca4 : nop
        test ebx, ebx
        mov eax, ecx
        jbe public_62bacc1
        mov ebp, dword ptr ss : [esp+0x24]
        mov esi, ebx
        public_62bacb0 : nop
        test eax, eax
        je public_62bacb9
        mov dl, byte ptr ss : [ebp]
        mov byte ptr ds : [eax], dl
        public_62bacb9 : nop
        inc eax
        dec esi
        jne public_62bacb0
        mov ebp, dword ptr ss : [esp+0x10]
        public_62bacc1 : nop
        mov esi, dword ptr ss : [ebp+8]
        cmp edi, esi
        lea edx, ds:[ecx+ebx]
        je public_62bace5
        mov eax, edx
        sub eax, ecx
        sub eax, ebx
        add eax, edi
        public_62bacd3 : nop
        test edx, edx
        je public_62bacdf
        mov cl, byte ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx], cl
        public_62bacdf : nop
        inc edx
        inc eax
        cmp eax, esi
        jne public_62bacd3
        public_62bace5 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax]
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_62bad1c
        xor eax, eax
        pop edi
        mov eax, edx
        add eax, ebx
        pop esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_62bad1c : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        pop edi
        add eax, edx
        add eax, ebx
        pop esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_62bad35 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, eax
        sub edx, esi
        cmp edx, ebx
        jae public_62bad9b
        cmp esi, eax
        lea edi, ds:[esi+ebx]
        je public_62bad62
        mov ecx, edi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_62bad50 : nop
        test edi, edi
        je public_62bad5c
        mov dl, byte ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edi], dl
        public_62bad5c : nop
        inc edi
        inc ecx
        cmp ecx, eax
        jne public_62bad50
        public_62bad62 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, esi
        sub eax, ecx
        add eax, ebx
        je public_62bad81
        public_62bad71 : nop
        test ecx, ecx
        je public_62bad7d
        mov dl, byte ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], dl
        public_62bad7d : nop
        inc ecx
        dec eax
        jne public_62bad71
        public_62bad81 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp esi, ecx
        mov eax, esi
        je public_62badfd
        lea ebx, ds:[ebx]
        public_62bad90 : nop
        mov dl, byte ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        cmp eax, ecx
        jne public_62bad90
        jmp public_62badf9
        public_62bad9b : nop
        test ebx, ebx
        jbe public_62bae00
        mov ecx, eax
        sub ecx, ebx
        cmp ecx, eax
        mov edi, eax
        je public_62badc2
        lea esp, ss:[esp]
        public_62badb0 : nop
        test edi, edi
        je public_62badbc
        mov dl, byte ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edi], dl
        public_62badbc : nop
        inc edi
        inc ecx
        cmp ecx, eax
        jne public_62badb0
        public_62badc2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, ebx
        cmp esi, eax
        je public_62baddf
        lea ecx, ds:[ecx]
        public_62badd0 : nop
        mov dl, byte ptr ds : [eax-1]
        dec eax
        dec ecx
        cmp eax, esi
        mov byte ptr ds : [ecx], dl
        jne public_62badd0
        mov ebp, dword ptr ss : [esp+0x10]
        public_62baddf : nop
        lea ecx, ds:[esi+ebx]
        cmp esi, ecx
        mov eax, esi
        je public_62badfd
        mov esi, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_62badf0 : nop
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [eax], dl
        inc eax
        cmp eax, ecx
        jne public_62badf0
        public_62badf9 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_62badfd : nop
        add dword ptr ss : [ebp+8], ebx
        public_62bae00 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x62bac30)
    }
}

#undef public_62bac60
#undef public_62bac62
#undef public_62bac6a
#undef public_62bac6c
#undef public_62bac78
#undef public_62bac92
#undef public_62bac9e
#undef public_62baca4
#undef public_62bacb0
#undef public_62bacb9
#undef public_62bacc1
#undef public_62bacd3
#undef public_62bacdf
#undef public_62bace5
#undef public_62bad1c
#undef public_62bad35
#undef public_62bad50
#undef public_62bad5c
#undef public_62bad62
#undef public_62bad71
#undef public_62bad7d
#undef public_62bad81
#undef public_62bad90
#undef public_62bad9b
#undef public_62badb0
#undef public_62badbc
#undef public_62badc2
#undef public_62badd0
#undef public_62baddf
#undef public_62badf0
#undef public_62badf9
#undef public_62badfd
#undef public_62bae00
