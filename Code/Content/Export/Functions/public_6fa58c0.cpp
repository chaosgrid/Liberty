#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa58c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa58dc _public_6fa58dc
#define public_6fa58f7 _public_6fa58f7
#define public_6fa5910 _public_6fa5910
#define public_6fa5942 _public_6fa5942
#define public_6fa5960 _public_6fa5960
#define public_6fa5980 _public_6fa5980
#define public_6fa59e0 _public_6fa59e0
#define public_6fa59f9 _public_6fa59f9
#define public_6fa5a00 _public_6fa5a00
#define public_6fa5a46 _public_6fa5a46
#define public_6fa5a50 _public_6fa5a50
#define public_6fa5a8a _public_6fa5a8a

PROC_DECLARE(0x6fa58c0, internal_6fa58c0, public_6fa58c0);
extern "C" NAKED register_t __cdecl internal_6fa58c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        lea esi, ds:[edx+4]
        test esi, esi
        push edi
        mov ebx, ecx
        jne public_6fa58dc
        mov dword ptr ds : [ebx], esi
        mov byte ptr ds : [ebx+4], 0
        jmp public_6fa5910
        public_6fa58dc : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+4]
        jb public_6fa58f7
        mov eax, 0x2F
        public_6fa58f7 : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+4], 0
        mov dword ptr ds : [ebx], eax
        public_6fa5910 : nop
        mov eax, dword ptr ds : [edx+0x34]
        mov dword ptr ds : [ebx+0x34], eax
        mov ecx, dword ptr ds : [edx+0x38]
        mov dword ptr ds : [ebx+0x38], ecx
        lea esi, ds:[edx+0x3C]
        lea edi, ds:[ebx+0x3C]
        mov ecx, 0x1A
        rep movsd
        lea esi, ds:[edx+0xA8]
        test esi, esi
        jne public_6fa5942
        mov dword ptr ds : [ebx+0xA4], esi
        mov byte ptr ds : [ebx+0xA8], 0
        jmp public_6fa5980
        public_6fa5942 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0xA8]
        jb public_6fa5960
        mov eax, 0x2F
        public_6fa5960 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [ebx+0xA4], eax
        public_6fa5980 : nop
        lea eax, ds:[edx+0xD8]
        mov esi, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xD8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [edx+0xE4]
        mov byte ptr ds : [ebx+0xE4], cl
        mov eax, dword ptr ds : [edx+0xE8]
        mov dword ptr ds : [ebx+0xE8], eax
        lea eax, ds:[edx+0xEC]
        lea edi, ds:[ebx+0xEC]
        cmp edi, eax
        je public_6fa5a8a
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [esi]
        cmp ebp, esi
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        je public_6fa5a46
        mov edi, edi
        public_6fa59e0 : nop
        cmp eax, dword ptr ss : [esp+0x14]
        je public_6fa59f9
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, esi
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6fa59e0
        public_6fa59f9 : nop
        cmp ebp, esi
        je public_6fa5a46
        lea ecx, ds:[ecx]
        public_6fa5a00 : nop
        push 0
        lea ecx, ss:[esp+0x20]
        mov eax, ebp
        mov ebp, dword ptr ss : [ebp]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp ebp, esi
        mov dword ptr ds : [edi+8], ecx
        jne public_6fa5a00
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x24]
        public_6fa5a46 : nop
        cmp eax, dword ptr ss : [esp+0x14]
        mov ebp, eax
        je public_6fa5a8a
        mov edi, edi
        public_6fa5a50 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov ecx, edi
        call public_6f93790
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[ebp+8]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6fa5a50
        mov edx, dword ptr ss : [esp+0x24]
        public_6fa5a8a : nop
        mov ax, word ptr ds : [edx+0xF8]
        pop edi
        mov word ptr ds : [ebx+0xF8], ax
        mov cl, byte ptr ds : [edx+0xFA]
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0xFA], cl
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6fa58c0)
    }
}

#undef public_6fa58dc
#undef public_6fa58f7
#undef public_6fa5910
#undef public_6fa5942
#undef public_6fa5960
#undef public_6fa5980
#undef public_6fa59e0
#undef public_6fa59f9
#undef public_6fa5a00
#undef public_6fa5a46
#undef public_6fa5a50
#undef public_6fa5a8a
