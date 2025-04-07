#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec1a80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ecde00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece190);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec1ad8 _public_6ec1ad8
#define public_6ec1ae2 _public_6ec1ae2
#define public_6ec1af8 _public_6ec1af8
#define public_6ec1b00 _public_6ec1b00
#define public_6ec1b0b _public_6ec1b0b
#define public_6ec1b13 _public_6ec1b13
#define public_6ec1b20 _public_6ec1b20
#define public_6ec1b2e _public_6ec1b2e
#define public_6ec1b4c _public_6ec1b4c
#define public_6ec1b69 _public_6ec1b69
#define public_6ec1b71 _public_6ec1b71
#define public_6ec1b79 _public_6ec1b79
#define public_6ec1b81 _public_6ec1b81
#define public_6ec1b89 _public_6ec1b89
#define public_6ec1b95 _public_6ec1b95
#define public_6ec1b9d _public_6ec1b9d
#define public_6ec1ba4 _public_6ec1ba4
#define public_6ec1bb2 _public_6ec1bb2
#define public_6ec1bde _public_6ec1bde
#define public_6ec1c03 _public_6ec1c03
#define public_6ec1c2c _public_6ec1c2c

PROC_DECLARE(0x6ec1a80, internal_6ec1a80, public_6ec1a80);
extern "C" NAKED register_t __cdecl internal_6ec1a80()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+4]
        mov byte ptr ds : [esi], al
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [edi], eax
        mov ebp, dword ptr ds : [ebx]
        push eax
        mov dword ptr ss : [esp+0x14], edi
        call public_6ed0c50
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [edi], 0
        je public_6ec1ae2
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        add esp, 4
        mov ecx, ebp
        mov edx, eax
        public_6ec1ad8 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6ec1ad8
        public_6ec1ae2 : nop
        lea edi, ds:[ebx+4]
        cmp esi, edi
        je public_6ec1c2c
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ec1af8
        xor ebp, ebp
        jmp public_6ec1b00
        public_6ec1af8 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_6ec1b00 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6ec1b0b
        xor edx, edx
        jmp public_6ec1b13
        public_6ec1b0b : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6ec1b13 : nop
        cmp ebp, edx
        ja public_6ec1b69
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        je public_6ec1b2e
        mov edi, edi
        public_6ec1b20 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ec1b20
        public_6ec1b2e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ec1b4c
        mov edx, dword ptr ds : [esi+4]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ec1b4c : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+4]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ec1b69 : nop
        test eax, eax
        jne public_6ec1b71
        xor ebp, ebp
        jmp public_6ec1b79
        public_6ec1b71 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_6ec1b79 : nop
        test ecx, ecx
        jne public_6ec1b81
        xor edx, edx
        jmp public_6ec1b89
        public_6ec1b81 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        sar edx, 2
        public_6ec1b89 : nop
        cmp ebp, edx
        ja public_6ec1bde
        test ecx, ecx
        jne public_6ec1b95
        xor edx, edx
        jmp public_6ec1b9d
        public_6ec1b95 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6ec1b9d : nop
        lea edx, ds:[eax+edx*4]
        cmp eax, edx
        je public_6ec1bb2
        public_6ec1ba4 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ec1ba4
        public_6ec1bb2 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        push edx
        mov ecx, esi
        call public_6ece190
        mov ecx, edi
        call public_6ecde00
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ec1bde : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6ecb170
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6ed0c50
        add esp, 4
        mov ecx, edi
        call public_6ecde00
        test eax, eax
        jge public_6ec1c03
        xor eax, eax
        public_6ec1c03 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6ece190
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        public_6ec1c2c : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ec1a80)
    }
}

#undef public_6ec1ad8
#undef public_6ec1ae2
#undef public_6ec1af8
#undef public_6ec1b00
#undef public_6ec1b0b
#undef public_6ec1b13
#undef public_6ec1b20
#undef public_6ec1b2e
#undef public_6ec1b4c
#undef public_6ec1b69
#undef public_6ec1b71
#undef public_6ec1b79
#undef public_6ec1b81
#undef public_6ec1b89
#undef public_6ec1b95
#undef public_6ec1b9d
#undef public_6ec1ba4
#undef public_6ec1bb2
#undef public_6ec1bde
#undef public_6ec1c03
#undef public_6ec1c2c
