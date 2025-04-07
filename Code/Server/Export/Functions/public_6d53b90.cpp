#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53b90);

#define public_6d53beb _public_6d53beb
#define public_6d53c03 _public_6d53c03
#define public_6d53c46 _public_6d53c46
#define public_6d53c4a _public_6d53c4a
#define public_6d53c5e _public_6d53c5e
#define public_6d53c63 _public_6d53c63
#define public_6d53c8f _public_6d53c8f
#define public_6d53ca5 _public_6d53ca5
#define public_6d53ce2 _public_6d53ce2
#define public_6d53d0a _public_6d53d0a
#define public_6d53d15 _public_6d53d15
#define public_6d53d1a _public_6d53d1a
#define public_6d53d20 _public_6d53d20
#define public_6d53d26 _public_6d53d26
#define public_6d53d43 _public_6d53d43

PROC_DECLARE(0x6d53b90, internal_6d53b90, public_6d53b90);
extern "C" NAKED register_t __cdecl internal_6d53b90()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push esi
        je public_6d53d43
        mov esi, dword ptr ds : [public_6d64bf0]
        push ebp
        push edi
        push 2
        push 0
        push eax
        call esi
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call dword ptr ds : [public_6d64bec]
        mov edx, dword ptr ds : [ebx+4]
        push 0
        mov ebp, eax
        push 0
        push edx
        mov dword ptr ss : [esp+0x2C], ebp
        call esi
        mov eax, dword ptr ds : [ebx+0x10]
        lea esi, ds:[ebx+8]
        add esp, 0x1C
        cmp ebp, eax
        ja public_6d53beb
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b78]
        jmp public_6d53c4a
        public_6d53beb : nop
        mov edx, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [edx]
        mov edi, ebp
        sub edi, eax
        sub ecx, eax
        cmp ecx, edi
        ja public_6d53c03
        call dword ptr ds : [public_6d64b4c]
        public_6d53c03 : nop
        test edi, edi
        jbe public_6d53c4a
        mov eax, dword ptr ds : [esi+8]
        add eax, edi
        push 0
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d53c46
        mov edx, dword ptr ds : [esi+8]
        mov ecx, edi
        mov edi, dword ptr ds : [esi+4]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64b88]
        public_6d53c46 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d53c4a : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d53c5e
        mov ecx, esi
        call dword ptr ds : [public_6d64ae4]
        mov eax, dword ptr ds : [esi+4]
        jmp public_6d53c63
        public_6d53c5e : nop
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d53c63 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        push ebp
        push 1
        push eax
        call dword ptr ds : [public_6d64bd4]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [public_6d64b80]
        add esp, 0x10
        cmp eax, ecx
        ja public_6d53c8f
        mov ecx, dword ptr ds : [edx]
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64b78]
        jmp public_6d53ce2
        public_6d53c8f : nop
        sub eax, ecx
        mov edi, eax
        mov eax, dword ptr ds : [edx]
        sub eax, ecx
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        ja public_6d53ca5
        call dword ptr ds : [public_6d64b4c]
        public_6d53ca5 : nop
        test edi, edi
        jbe public_6d53ce2
        mov ebp, dword ptr ds : [esi+8]
        push 0
        add ebp, edi
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d53ce2
        mov edx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b88]
        public_6d53ce2 : nop
        mov esi, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        add ebx, 8
        test eax, eax
        pop edi
        pop ebp
        je public_6d53d1a
        mov al, byte ptr ds : [eax-1]
        test al, al
        je public_6d53d0a
        cmp al, 0xFF
        je public_6d53d0a
        mov eax, dword ptr ds : [ebx+8]
        push 0
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d64b84]
        public_6d53d0a : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6d53d15
        mov byte ptr ds : [eax-1], 0xFF
        public_6d53d15 : nop
        mov ecx, dword ptr ds : [ebx+4]
        jmp public_6d53d20
        public_6d53d1a : nop
        mov ecx, dword ptr ds : [public_6d64b7c]
        public_6d53d20 : nop
        xor eax, eax
        test esi, esi
        jle public_6d53d43
        public_6d53d26 : nop
        mov bl, byte ptr ds : [eax+ecx]
        mov edx, eax
        and edx, 3
        mov dl, byte ptr ds : [edx+public_6d6b318]
        add dl, al
        or dl, 0x80
        xor bl, dl
        mov byte ptr ds : [eax+ecx], bl
        inc eax
        cmp eax, esi
        jl public_6d53d26
        public_6d53d43 : nop
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d53b90)
    }
}

#undef public_6d53beb
#undef public_6d53c03
#undef public_6d53c46
#undef public_6d53c4a
#undef public_6d53c5e
#undef public_6d53c63
#undef public_6d53c8f
#undef public_6d53ca5
#undef public_6d53ce2
#undef public_6d53d0a
#undef public_6d53d15
#undef public_6d53d1a
#undef public_6d53d20
#undef public_6d53d26
#undef public_6d53d43
