#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413d00);
CLANG_FORWARD_PROC_SYMBOL(public_414640);
CLANG_FORWARD_PROC_SYMBOL(public_414aa0);
CLANG_FORWARD_PROC_SYMBOL(public_414e80);
CLANG_FORWARD_PROC_SYMBOL(public_4153b0);
CLANG_FORWARD_PROC_SYMBOL(public_4155a0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_413d1e _public_413d1e
#define public_413d20 _public_413d20
#define public_413d50 _public_413d50
#define public_413d78 _public_413d78
#define public_413d9d _public_413d9d
#define public_413da1 _public_413da1
#define public_413dc1 _public_413dc1

PROC_DECLARE(0x413d00, internal_413d00, public_413d00);
extern "C" NAKED register_t __cdecl internal_413d00()
{
    __asm
    {
        mov cl, byte ptr ds : [public_428ccc]
        mov al, 1
        test al, cl
        jne public_413d1e
        or cl, al
        mov byte ptr ds : [public_428ccc], cl
        mov ecx, offset public_4294ec
        jmp public_413d20
        public_413d1e : nop
        ret 
        nop 
        public_413d20 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_413d9d
        mov ecx, eax
        cmp eax, ecx
        jne public_413d9d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_413d78
        nop 
        lea esp, ss:[esp]
        public_413d50 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_414e80
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_4155a0
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_413d50
        public_413d78 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_414640
        jmp public_413dc1
        public_413d9d : nop
        cmp eax, edi
        je public_413dc1
        public_413da1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_4153b0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_414aa0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_413da1
        public_413dc1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_418978
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x413d00)
    }
}

#undef public_413d1e
#undef public_413d20
#undef public_413d50
#undef public_413d78
#undef public_413d9d
#undef public_413da1
#undef public_413dc1
