#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);

#define public_62e9233 _public_62e9233
#define public_62e9243 _public_62e9243
#define public_62e9245 _public_62e9245
#define public_62e9277 _public_62e9277
#define public_62e9279 _public_62e9279
#define public_62e92a9 _public_62e92a9
#define public_62e92ab _public_62e92ab
#define public_62e92bc _public_62e92bc
#define public_62e92bf _public_62e92bf

PROC_DECLARE(0x62e91d0, internal_62e91d0, public_62e91d0);
extern "C" NAKED register_t __cdecl internal_62e91d0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_62e92bf
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_62e92bf
        mov bl, byte ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov cx, word ptr ds : [public_63a4aa4]
        and edx, 0xE0000000
        mov word ptr ss : [esp+0xA], cx
        and bl, 0xF8
        mov byte ptr ss : [esp+0xC], bl
        mov dword ptr ss : [esp+0x10], edx
        mov ecx, dword ptr ds : [eax+0x1580]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        mov ebx, dword ptr ss : [esp+0x18]
        jne public_62e9233
        cmp byte ptr ds : [esi+0x16], bl
        je public_62e92bf
        public_62e9233 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9243
        lea ecx, ds:[eax-8]
        jmp public_62e9245
        public_62e9243 : nop
        xor ecx, ecx
        public_62e9245 : nop
        mov eax, dword ptr ds : [ecx]
        push 0x20000
        push 1
        lea edx, ss:[esp+0x12]
        push edx
        call dword ptr ds : [eax+0x114]
        mov ax, word ptr ss : [esp+0xA]
        cmp ax, word ptr ds : [public_63a4aa4]
        je public_62e92bc
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9277
        lea ecx, ds:[eax-8]
        jmp public_62e9279
        public_62e9277 : nop
        xor ecx, ecx
        public_62e9279 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xA]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0x118]
        mov al, byte ptr ss : [esp+0xC]
        test al, 2
        jne public_62e92bc
        and al, 1
        cmp bl, al
        je public_62e92bc
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e92a9
        add eax, 0xFFFFFFF8
        jmp public_62e92ab
        public_62e92a9 : nop
        xor eax, eax
        public_62e92ab : nop
        mov edx, dword ptr ds : [eax+4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        push ebx
        lea eax, ss:[esp+0x12]
        push eax
        call dword ptr ds : [edx+0x4C]
        public_62e92bc : nop
        mov byte ptr ds : [esi+0x16], bl
        public_62e92bf : nop
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62e91d0)
    }
}

#undef public_62e9233
#undef public_62e9243
#undef public_62e9245
#undef public_62e9277
#undef public_62e9279
#undef public_62e92a9
#undef public_62e92ab
#undef public_62e92bc
#undef public_62e92bf
