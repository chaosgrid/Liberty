#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d070);
CLANG_FORWARD_PROC_SYMBOL(public_630d1f0);
CLANG_FORWARD_PROC_SYMBOL(public_630d330);

#define public_630d205 _public_630d205
#define public_630d261 _public_630d261
#define public_630d271 _public_630d271
#define public_630d2b1 _public_630d2b1
#define public_630d2e7 _public_630d2e7
#define public_630d301 _public_630d301
#define public_630d318 _public_630d318

PROC_DECLARE(0x630d1f0, internal_630d1f0, public_630d1f0);
extern "C" NAKED register_t __cdecl internal_630d1f0()
{
    __asm
    {
        sub esp, 0x100
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp], 0
        push esi
        jne public_630d205
        call public_630d070
        public_630d205 : nop
        mov esi, dword ptr ss : [esp+0x10C]
        xor eax, eax
        test esi, esi
        je public_630d318
        or ecx, 0xFFFFFFFF
        push ebx
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        lea ecx, ds:[ebx+1]
        mov eax, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x10]
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_639934c]
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax+0x40C]
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax+0x418], edx
        mov edi, dword ptr ss : [ebp]
        lea esi, ss:[esp+0x10]
        jle public_630d271
        public_630d261 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov ecx, edi
        inc esi
        push eax
        call public_630d330
        dec ebx
        jne public_630d261
        public_630d271 : nop
        mov esi, dword ptr ss : [ebp]
        mov al, byte ptr ds : [esi+0x414]
        test al, al
        jne public_630d2b1
        mov edx, dword ptr ds : [esi+0x404]
        mov ebp, dword ptr ds : [esi+0x410]
        lea ecx, ds:[edx-1]
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr ds : [esi+0x418]
        xor ecx, ebp
        lea eax, ds:[eax+eax-1]
        or eax, 1
        and eax, ecx
        mov ecx, dword ptr ds : [esi+0x400]
        sub ecx, edx
        shl eax, cl
        jmp public_630d301
        public_630d2b1 : nop
        mov ecx, dword ptr ds : [esi+0x404]
        mov ebx, dword ptr ds : [esi+0x410]
        xor eax, eax
        dec ecx
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [esi+0x418]
        xor ecx, ebx
        mov ebx, dword ptr ds : [esi+0x400]
        lea edx, ds:[edx+edx-1]
        or edx, 1
        mov edi, 8
        and edx, ecx
        cmp ebx, edi
        jb public_630d301
        public_630d2e7 : nop
        mov ebp, edx
        mov ecx, ebx
        sub ecx, edi
        and ebp, 0xFF
        shl ebp, cl
        add edi, 8
        shr edx, 8
        or eax, ebp
        cmp edi, ebx
        jbe public_630d2e7
        public_630d301 : nop
        mov edi, dword ptr ds : [esi+0x404]
        mov ecx, dword ptr ds : [esi+0x400]
        sub ecx, edi
        shr eax, cl
        pop edi
        pop ebx
        or eax, 0x80000000
        public_630d318 : nop
        pop esi
        pop ebp
        add esp, 0x100
        ret 4
        UNREACHABLE_TRAP(0x630d1f0)
    }
}

#undef public_630d205
#undef public_630d261
#undef public_630d271
#undef public_630d2b1
#undef public_630d2e7
#undef public_630d301
#undef public_630d318
