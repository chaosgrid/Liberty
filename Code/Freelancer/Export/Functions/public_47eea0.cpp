#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437d90);
CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_438270);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_4427e0);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_47e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_47eea0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4260);
CLANG_FORWARD_PROC_SYMBOL(public_4c4d30);
CLANG_FORWARD_PROC_SYMBOL(public_4c62b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f6380);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_47eedf _public_47eedf
#define public_47ef26 _public_47ef26
#define public_47ef9f _public_47ef9f
#define public_47efa3 _public_47efa3
#define public_47efc3 _public_47efc3
#define public_47f02b _public_47f02b
#define public_47f036 _public_47f036

PROC_DECLARE(0x47eea0, internal_47eea0, public_47eea0);
extern "C" NAKED register_t __cdecl internal_47eea0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        je public_47f036
        call public_47e790
        mov edi, eax
        test edi, edi
        je public_47f036
        mov eax, dword ptr ds : [ebx+0x32C]
        test eax, eax
        jne public_47eedf
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, offset public_674c0c
        call public_4f6380
        public_47eedf : nop
        mov eax, dword ptr ds : [public_66873c]
        push ebp
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov ebx, eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_5c632c]
        add esp, 4
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], eax
        call public_437d90
        mov ebp, eax
        test ebp, ebp
        je public_47f02b
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        jae public_47ef26
        mov esi, eax
        public_47ef26 : nop
        add dword ptr ss : [ebp+0x1C], esi
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_47e460
        add esp, 4
        cmp eax, 4
        je public_47efa3
        mov eax, dword ptr ds : [edi+4]
        push eax
        call dword ptr ds : [public_5c63a0]
        add esp, 4
        test al, al
        jne public_47ef9f
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov ax, word ptr ds : [edi+2]
        add ecx, 0x3A8
        push eax
        call dword ptr ds : [public_5c6370]
        test eax, eax
        mov ebx, dword ptr ss : [esp+0x28]
        je public_47efa3
        mov ebp, dword ptr ss : [ebp]
        push ebp
        mov ecx, ebx
        call public_438060
        fmul dword ptr ds : [public_5d0e2c]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], 0
        fadd dword ptr ds : [public_5d1914]
        fld dword ptr ds : [edi+0x10]
        fimul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        call public_5b7ec0
        fstp st(0)
        jmp public_47efc3
        public_47ef9f : nop
        mov ebx, dword ptr ss : [esp+0x28]
        public_47efa3 : nop
        mov ebp, dword ptr ss : [ebp]
        push ebp
        mov ecx, ebx
        call public_438060
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], 0
        fimul dword ptr ss : [esp+0x1C]
        call public_5b7ec0
        public_47efc3 : nop
        push eax
        call public_4c4d30
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        push esi
        mov byte ptr ss : [ebp+0x3B8], 1
        mov eax, dword ptr ds : [public_66873c]
        push edx
        push eax
        mov ecx, ebx
        call public_438270
        xor ecx, ecx
        mov cx, word ptr ds : [edi+2]
        push esi
        push ecx
        call public_4c4260
        add esp, 8
        push 1
        call public_4c4060
        push eax
        lea ecx, ss:[ebp+0x330]
        call public_4c62b0
        cmp esi, dword ptr ss : [esp+0x18]
        mov byte ptr ss : [ebp+0x4E5], 0
        jne public_47f02b
        mov eax, dword ptr ss : [ebp+0x398]
        test eax, eax
        je public_47f02b
        mov ecx, ebp
        call public_47e9e0
        public_47f02b : nop
        push 0
        call public_4427e0
        add esp, 4
        pop ebp
        public_47f036 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x47eea0)
    }
}

#undef public_47eedf
#undef public_47ef26
#undef public_47ef9f
#undef public_47efa3
#undef public_47efc3
#undef public_47f02b
#undef public_47f036
