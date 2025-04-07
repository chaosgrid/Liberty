#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a4b50);

#define public_5a4b64 _public_5a4b64
#define public_5a4b78 _public_5a4b78
#define public_5a4b8f _public_5a4b8f
#define public_5a4b9e _public_5a4b9e
#define public_5a4bab _public_5a4bab
#define public_5a4bad _public_5a4bad
#define public_5a4bef _public_5a4bef
#define public_5a4bfb _public_5a4bfb
#define public_5a4c12 _public_5a4c12
#define public_5a4c1c _public_5a4c1c
#define public_5a4c2e _public_5a4c2e
#define public_5a4c38 _public_5a4c38
#define public_5a4c73 _public_5a4c73
#define public_5a4c81 _public_5a4c81

PROC_DECLARE(0x5a4b50, internal_5a4b50, public_5a4b50);
extern "C" NAKED register_t __cdecl internal_5a4b50()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        xor esi, esi
        xor eax, eax
        test ebp, ebp
        jle public_5a4c81
        push ebx
        push edi
        public_5a4b64 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+eax*4]
        lea edi, ds:[eax+1]
        xor edx, edx
        cmp edi, ebp
        je public_5a4b78
        mov edx, dword ptr ds : [ebx+eax*4+4]
        public_5a4b78 : nop
        mov bl, byte ptr ds : [ecx+0x35C]
        mov al, bl
        shr al, 1
        and al, 1
        mov byte ptr ss : [esp+0x18], al
        jne public_5a4b8f
        test bl, 1
        je public_5a4bab
        public_5a4b8f : nop
        test edx, edx
        mov bl, 1
        je public_5a4b9e
        test byte ptr ds : [edx+0x35C], 0x10
        jne public_5a4bab
        public_5a4b9e : nop
        test esi, esi
        je public_5a4bad
        test byte ptr ds : [esi+0x35C], 0x10
        je public_5a4bad
        public_5a4bab : nop
        xor bl, bl
        public_5a4bad : nop
        test edx, edx
        je public_5a4c2e
        mov al, byte ptr ds : [edx+0x6C]
        test al, 2
        je public_5a4c2e
        test al, 1
        je public_5a4c2e
        mov al, byte ptr ds : [ecx+0x35C]
        test al, 0x10
        jne public_5a4c2e
        test bl, bl
        jne public_5a4c2e
        mov bl, byte ptr ss : [esp+0x18]
        test bl, bl
        jne public_5a4bfb
        test al, 1
        jne public_5a4bfb
        test esi, esi
        je public_5a4bef
        test byte ptr ds : [esi+0x35C], 0x13
        je public_5a4bef
        mov dword ptr ds : [ecx+0x384], 0xA
        jmp public_5a4c38
        public_5a4bef : nop
        mov dword ptr ds : [ecx+0x384], 0xB
        jmp public_5a4c38
        public_5a4bfb : nop
        test esi, esi
        mov dword ptr ds : [ecx+0x384], 0xA
        je public_5a4c12
        test byte ptr ds : [esi+0x35C], 0x10
        jne public_5a4c1c
        public_5a4c12 : nop
        mov dword ptr ds : [ecx+0x384], 0xB
        public_5a4c1c : nop
        test byte ptr ds : [edx+0x35C], 0x10
        jne public_5a4c38
        or dword ptr ds : [ecx+0x384], 4
        jmp public_5a4c38
        public_5a4c2e : nop
        mov dword ptr ds : [ecx+0x384], 0xF
        public_5a4c38 : nop
        test esi, esi
        je public_5a4c73
        mov eax, dword ptr ds : [esi+0x384]
        test al, 4
        jne public_5a4c73
        test byte ptr ds : [ecx+0x384], 1
        je public_5a4c73
        mov dl, byte ptr ds : [esi+0x37C]
        test dl, dl
        jne public_5a4c73
        mov dl, byte ptr ds : [ecx+0x37C]
        test dl, dl
        je public_5a4c73
        or eax, 4
        mov dword ptr ds : [esi+0x384], eax
        and dword ptr ds : [ecx+0x384], 0xFFFFFFFE
        public_5a4c73 : nop
        mov eax, edi
        cmp eax, ebp
        mov esi, ecx
        jl public_5a4b64
        pop edi
        pop ebx
        public_5a4c81 : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x5a4b50)
    }
}

#undef public_5a4b64
#undef public_5a4b78
#undef public_5a4b8f
#undef public_5a4b9e
#undef public_5a4bab
#undef public_5a4bad
#undef public_5a4bef
#undef public_5a4bfb
#undef public_5a4c12
#undef public_5a4c1c
#undef public_5a4c2e
#undef public_5a4c38
#undef public_5a4c73
#undef public_5a4c81
