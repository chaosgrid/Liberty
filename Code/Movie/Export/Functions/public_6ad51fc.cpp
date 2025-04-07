#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad51fc);

#define public_6ad5236 _public_6ad5236
#define public_6ad524b _public_6ad524b
#define public_6ad5257 _public_6ad5257
#define public_6ad5259 _public_6ad5259
#define public_6ad527c _public_6ad527c
#define public_6ad5283 _public_6ad5283
#define public_6ad5288 _public_6ad5288
#define public_6ad5291 _public_6ad5291
#define public_6ad5296 _public_6ad5296
#define public_6ad529d _public_6ad529d

PROC_DECLARE(0x6ad51fc, internal_6ad51fc, public_6ad51fc);
extern "C" NAKED register_t __cdecl internal_6ad51fc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        movzx ecx, byte ptr ds : [edx]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        mov eax, ebx
        sub eax, dword ptr ds : [edi+0x10]
        sar eax, 0xC
        cmp ecx, dword ptr ss : [ebp+0x14]
        lea edi, ds:[edi+eax*8+0x18]
        jbe public_6ad5236
        mov eax, dword ptr ss : [ebp+0x14]
        sub ecx, eax
        mov byte ptr ds : [edx], al
        add dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], 0xF1
        jmp public_6ad5296
        public_6ad5236 : nop
        jae public_6ad529d
        mov eax, dword ptr ss : [ebp+0x14]
        lea esi, ds:[edx+eax]
        lea eax, ds:[ebx+0xF8]
        cmp eax, esi
        jb public_6ad529d
        lea eax, ds:[ecx+edx]
        public_6ad524b : nop
        cmp eax, esi
        jae public_6ad5259
        cmp byte ptr ds : [eax], 0
        jne public_6ad5257
        inc eax
        jmp public_6ad524b
        public_6ad5257 : nop
        cmp eax, esi
        public_6ad5259 : nop
        jne public_6ad529d
        mov al, byte ptr ss : [ebp+0x14]
        mov byte ptr ds : [edx], al
        mov eax, dword ptr ds : [ebx]
        cmp edx, eax
        ja public_6ad5291
        cmp esi, eax
        jbe public_6ad5291
        lea eax, ds:[ebx+0xF8]
        cmp esi, eax
        jae public_6ad5288
        xor eax, eax
        mov dword ptr ds : [ebx], esi
        cmp byte ptr ds : [esi], al
        jne public_6ad5283
        public_6ad527c : nop
        inc eax
        cmp byte ptr ds : [esi+eax], 0
        je public_6ad527c
        public_6ad5283 : nop
        mov dword ptr ds : [ebx+4], eax
        jmp public_6ad5291
        public_6ad5288 : nop
        and dword ptr ds : [ebx+4], 0
        lea eax, ds:[ebx+8]
        mov dword ptr ds : [ebx], eax
        public_6ad5291 : nop
        sub ecx, dword ptr ss : [ebp+0x14]
        add dword ptr ds : [edi], ecx
        public_6ad5296 : nop
        mov dword ptr ss : [ebp-4], 1
        public_6ad529d : nop
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad51fc)
    }
}

#undef public_6ad5236
#undef public_6ad524b
#undef public_6ad5257
#undef public_6ad5259
#undef public_6ad527c
#undef public_6ad5283
#undef public_6ad5288
#undef public_6ad5291
#undef public_6ad5296
#undef public_6ad529d
