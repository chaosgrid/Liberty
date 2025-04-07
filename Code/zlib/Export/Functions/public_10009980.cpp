#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001a80);
CLANG_FORWARD_PROC_SYMBOL(public_10001d60);

#define public_10009993 _public_10009993
#define public_1000999d _public_1000999d
#define public_100099c4 _public_100099c4
#define public_100099f4 _public_100099f4
#define public_10009a05 _public_10009a05
#define public_10009a34 _public_10009a34
#define public_10009a40 _public_10009a40
#define public_10009a46 _public_10009a46
#define public_10009a57 _public_10009a57
#define public_10009a8f _public_10009a8f
#define public_10009a97 _public_10009a97

PROC_DECLARE(0x10009980, internal_10009980, public_10009980);
extern "C" NAKED register_t __cdecl internal_10009980()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        test esi, esi
        je public_10009993
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jne public_1000999d
        public_10009993 : nop
        pop esi
        mov eax, 0xFFFFFF9A
        pop ebx
        ret 0xC
        public_1000999d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        push edi
        push ecx
        lea ebp, ds:[esi+0x30]
        push eax
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+0x408C]
        push eax
        mov dword ptr ds : [esi+0x34], ecx
        call public_10001a80
        mov dword ptr ds : [esi+0x408C], eax
        public_100099c4 : nop
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        jbe public_10009a97
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_10009a05
        mov ecx, dword ptr ds : [esi+0x6C]
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        lea edi, ds:[esi+0x88]
        push edi
        push edx
        push eax
        call dword ptr ds : [esi+8]
        cmp eax, dword ptr ds : [esi+0x6C]
        je public_100099f4
        or ebx, 0xFFFFFFFF
        public_100099f4 : nop
        mov dword ptr ds : [esi+0x6C], 0
        mov dword ptr ds : [esi+0x40], 0x4000
        mov dword ptr ds : [esi+0x3C], edi
        public_10009a05 : nop
        cmp dword ptr ds : [esi+0x80], 8
        jne public_10009a34
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        jne public_10009a34
        mov edi, dword ptr ds : [esi+0x44]
        push 0
        push ebp
        call public_10001d60
        mov ecx, dword ptr ds : [esi+0x44]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x6C]
        sub ecx, edi
        add eax, ecx
        mov dword ptr ds : [esi+0x6C], eax
        jmp public_10009a8f
        public_10009a34 : nop
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [esi+0x34]
        cmp ecx, eax
        jae public_10009a40
        mov eax, ecx
        public_10009a40 : nop
        xor ecx, ecx
        test eax, eax
        jbe public_10009a57
        public_10009a46 : nop
        mov edx, dword ptr ss : [ebp]
        mov dl, byte ptr ds : [ecx+edx]
        mov edi, dword ptr ds : [esi+0x3C]
        mov byte ptr ds : [ecx+edi], dl
        inc ecx
        cmp ecx, eax
        jb public_10009a46
        public_10009a57 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov edi, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ss : [ebp]
        sub ecx, eax
        mov dword ptr ds : [esi+0x34], ecx
        mov ecx, dword ptr ds : [esi+0x3C]
        sub edi, eax
        add edx, eax
        add ecx, eax
        mov dword ptr ds : [esi+0x40], edi
        mov edi, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [ebp], edx
        mov edx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [esi+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x6C]
        add edi, eax
        add edx, eax
        add ecx, eax
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x44], edx
        mov dword ptr ds : [esi+0x6C], ecx
        public_10009a8f : nop
        test ebx, ebx
        je public_100099c4
        public_10009a97 : nop
        pop edi
        pop ebp
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x10009980)
    }
}

#undef public_10009993
#undef public_1000999d
#undef public_100099c4
#undef public_100099f4
#undef public_10009a05
#undef public_10009a34
#undef public_10009a40
#undef public_10009a46
#undef public_10009a57
#undef public_10009a8f
#undef public_10009a97
