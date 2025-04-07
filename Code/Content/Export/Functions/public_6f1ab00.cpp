#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6f1ab33 _public_6f1ab33
#define public_6f1ab45 _public_6f1ab45
#define public_6f1abaa _public_6f1abaa
#define public_6f1abd2 _public_6f1abd2
#define public_6f1abda _public_6f1abda

PROC_DECLARE(0x6f1ab00, internal_6f1ab00, public_6f1ab00);
extern "C" NAKED register_t __cdecl internal_6f1ab00()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        push edi
        mov edi, ecx
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        mov ebp, dword ptr ds : [public_6fb3020]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        jne public_6f1abaa
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        public_6f1ab33 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ds:[edi+0x38]
        push edx
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6f1ab45 : nop
        push 2
        mov ecx, esi
        call ebp
        push 3
        mov ecx, esi
        mov dword ptr ds : [edi+0xC], eax
        call ebp
        push 5
        mov ecx, esi
        mov dword ptr ds : [edi+0x3C], eax
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0x10]
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x18]
        fld qword ptr ss : [esp+0x10]
        push 6
        mov ecx, esi
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add edi, 0x40
        mov dword ptr ds : [edi], eax
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 4
        public_6f1abaa : nop
        push eax
        lea eax, ss:[esp+0x2C]
        push 0x40
        push eax
        call public_6ea9f40
        mov dword ptr ss : [esp+0x30], eax
        mov al, byte ptr ss : [esp+0x34]
        add esp, 0xC
        cmp al, bl
        je public_6f1ab33
        cmp al, 0x30
        jl public_6f1abd2
        cmp al, 0x39
        jle public_6f1abda
        public_6f1abd2 : nop
        cmp al, 0x2D
        jne public_6f1ab33
        public_6f1abda : nop
        push 1
        mov ecx, esi
        call ebp
        mov dword ptr ds : [edi+0x38], eax
        jmp public_6f1ab45
        UNREACHABLE_TRAP(0x6f1ab00)
    }
}

#undef public_6f1ab33
#undef public_6f1ab45
#undef public_6f1abaa
#undef public_6f1abd2
#undef public_6f1abda
