#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8310);
CLANG_FORWARD_PROC_SYMBOL(public_6f69570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa0d16 _public_6fa0d16
#define public_6fa0d1b _public_6fa0d1b
#define public_6fa0d23 _public_6fa0d23
#define public_6fa0d25 _public_6fa0d25
#define public_6fa0d31 _public_6fa0d31
#define public_6fa0d47 _public_6fa0d47
#define public_6fa0d57 _public_6fa0d57
#define public_6fa0d71 _public_6fa0d71
#define public_6fa0d83 _public_6fa0d83
#define public_6fa0dc2 _public_6fa0dc2
#define public_6fa0de3 _public_6fa0de3
#define public_6fa0e16 _public_6fa0e16
#define public_6fa0e21 _public_6fa0e21
#define public_6fa0e34 _public_6fa0e34
#define public_6fa0e3f _public_6fa0e3f
#define public_6fa0e50 _public_6fa0e50
#define public_6fa0e59 _public_6fa0e59

PROC_DECLARE(0x6fa0ce0, internal_6fa0ce0, public_6fa0ce0);
extern "C" NAKED register_t __cdecl internal_6fa0ce0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, esi
        sub ebp, ecx
        sub edx, eax
        cmp edx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6fa0de3
        test ecx, ecx
        je public_6fa0d16
        mov edx, eax
        sub edx, ecx
        cmp edx, 1
        ja public_6fa0d1b
        public_6fa0d16 : nop
        mov edx, 1
        public_6fa0d1b : nop
        test ecx, ecx
        jne public_6fa0d23
        xor eax, eax
        jmp public_6fa0d25
        public_6fa0d23 : nop
        sub eax, ecx
        public_6fa0d25 : nop
        add eax, edx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6fa0d31
        xor eax, eax
        public_6fa0d31 : nop
        push eax
        call public_6fa912a
        mov ebp, dword ptr ds : [edi+4]
        add esp, 4
        cmp ebp, esi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        je public_6fa0d57
        public_6fa0d47 : nop
        push ebp
        push ebx
        call public_6ef8310
        add esp, 8
        inc ebx
        inc ebp
        cmp ebp, esi
        jne public_6fa0d47
        public_6fa0d57 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebx
        call public_6ef8310
        lea ebp, ds:[ebx+1]
        mov ebx, dword ptr ds : [edi+8]
        add esp, 8
        cmp esi, ebx
        je public_6fa0d83
        sub ebp, esi
        public_6fa0d71 : nop
        lea ecx, ds:[esi+ebp]
        push esi
        push ecx
        call public_6ef8310
        add esp, 8
        inc esi
        cmp esi, ebx
        jne public_6fa0d71
        public_6fa0d83 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+eax]
        mov dword ptr ds : [edi+0xC], ecx
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6fa0dc2
        mov ebp, dword ptr ss : [esp+0x14]
        xor eax, eax
        lea eax, ds:[eax+edx+1]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], edx
        pop edi
        mov eax, edx
        pop esi
        add eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6fa0dc2 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ebp, dword ptr ss : [esp+0x14]
        sub eax, ecx
        lea eax, ds:[eax+edx+1]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], edx
        pop edi
        mov eax, edx
        pop esi
        add eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6fa0de3 : nop
        mov ecx, eax
        sub ecx, esi
        cmp ecx, 1
        mov ecx, edi
        jae public_6fa0e21
        lea edx, ds:[esi+1]
        push edx
        push eax
        push esi
        call public_6f69570
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, esi
        sub ecx, eax
        push ebx
        inc ecx
        push ecx
        push eax
        mov ecx, edi
        call public_6fa3c80
        mov eax, dword ptr ds : [edi+8]
        cmp esi, eax
        je public_6fa0e59
        public_6fa0e16 : nop
        mov dl, byte ptr ds : [ebx]
        mov byte ptr ds : [esi], dl
        inc esi
        cmp esi, eax
        jne public_6fa0e16
        jmp public_6fa0e59
        public_6fa0e21 : nop
        push eax
        push eax
        dec eax
        push eax
        call public_6f69570
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[ecx-1]
        cmp esi, eax
        je public_6fa0e3f
        public_6fa0e34 : nop
        mov dl, byte ptr ds : [eax-1]
        dec eax
        dec ecx
        cmp eax, esi
        mov byte ptr ds : [ecx], dl
        jne public_6fa0e34
        public_6fa0e3f : nop
        lea eax, ds:[esi+1]
        cmp esi, eax
        je public_6fa0e59
        mov ecx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_6fa0e50 : nop
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [esi], dl
        inc esi
        cmp esi, eax
        jne public_6fa0e50
        public_6fa0e59 : nop
        inc dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        pop edi
        pop esi
        add eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6fa0ce0)
    }
}

#undef public_6fa0d16
#undef public_6fa0d1b
#undef public_6fa0d23
#undef public_6fa0d25
#undef public_6fa0d31
#undef public_6fa0d47
#undef public_6fa0d57
#undef public_6fa0d71
#undef public_6fa0d83
#undef public_6fa0dc2
#undef public_6fa0de3
#undef public_6fa0e16
#undef public_6fa0e21
#undef public_6fa0e34
#undef public_6fa0e3f
#undef public_6fa0e50
#undef public_6fa0e59
