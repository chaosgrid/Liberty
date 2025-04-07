#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec03c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5570);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5670);
CLANG_FORWARD_PROC_SYMBOL(public_6ec63d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec0460 _public_6ec0460
#define public_6ec0471 _public_6ec0471
#define public_6ec047d _public_6ec047d

PROC_DECLARE(0x6ec03c0, internal_6ec03c0, public_6ec03c0);
extern "C" NAKED register_t __cdecl internal_6ec03c0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov dl, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x3C]
        xor ebx, ebx
        push edi
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6ec5570
        mov al, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        lea ecx, ds:[esi+0x54]
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6ec5670
        mov edx, dword ptr ds : [public_6ed57d8]
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x68]
        add edx, 2
        push 1
        mov dword ptr ds : [public_6ed57d8], edx
        push ebx
        mov ecx, edi
        mov byte ptr ds : [edi+1], al
        mov byte ptr ds : [edi+0xC], bl
        call public_6ec63d0
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x49], 1
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ds : [edi+8]
        push ebx
        push eax
        mov ecx, edi
        call public_6ec63d0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        dec dword ptr ds : [public_6ed57d8]
        jne public_6ec047d
        mov eax, dword ptr ds : [public_6ed57d4]
        cmp eax, ebx
        je public_6ec0471
        nop 
        lea esp, ss:[esp]
        public_6ec0460 : nop
        mov edi, dword ptr ds : [eax]
        push eax
        call public_6ed0c50
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_6ec0460
        public_6ec0471 : nop
        mov dword ptr ds : [public_6ed57d4], ebx
        mov dword ptr ds : [public_6ed57e0], ebx
        public_6ec047d : nop
        mov cl, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        push 0x18
        mov byte ptr ds : [esi+0x7C], cl
        mov byte ptr ds : [esi+0x7D], dl
        mov byte ptr ds : [esi+0x88], bl
        call public_6ed0c5c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x84], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x84]
        push 0x18
        call public_6ed0c5c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x80]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x8C], ebx
        add esp, 8
        xor eax, eax
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0x2C], bl
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [esi], offset public_6ed2930
        mov dword ptr ds : [esi+4], offset public_6ed2920
        mov dword ptr ds : [esi+0x50], 1
        mov dword ptr ds : [esi+0x90], 1
        mov ecx, 7
        rep stosd
        mov eax, 0x100
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        pop edi
        mov dword ptr ds : [esi+0x30], 1
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ec03c0)
    }
}

#undef public_6ec0460
#undef public_6ec0471
#undef public_6ec047d
