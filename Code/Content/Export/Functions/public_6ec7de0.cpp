#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8a20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ec7e1b _public_6ec7e1b
#define public_6ec7e32 _public_6ec7e32
#define public_6ec7e4e _public_6ec7e4e
#define public_6ec7e8f _public_6ec7e8f
#define public_6ec7eac _public_6ec7eac

PROC_DECLARE(0x6ec7de0, internal_6ec7de0, public_6ec7de0);
extern "C" NAKED register_t __cdecl internal_6ec7de0()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        mov ebp, ecx
        xor ebx, ebx
        push esi
        or ecx, 0xFFFFFFFF
        lea esi, ss:[ebp+0x10]
        cmp esi, ebx
        push edi
        mov byte ptr ss : [esp+0x14], bl
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], ebx
        mov byte ptr ss : [esp+0x9C], bl
        jne public_6ec7e1b
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jmp public_6ec7e4e
        public_6ec7e1b : nop
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_6ec7e32
        mov eax, 0x7F
        public_6ec7e32 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], bl
        mov dword ptr ss : [esp+0x10], eax
        public_6ec7e4e : nop
        mov al, byte ptr ss : [ebp+0x90]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov byte ptr ss : [esp+0xA1], al
        call public_6eb8a20
        mov ebp, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [ebp+0x2F4]
        mov edi, dword ptr ds : [esi+4]
        add ebp, 0x2F0
        push 0x98
        call public_6fa912a
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_6ec7e8f
        mov edi, eax
        public_6ec7e8f : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        cmp edi, ebx
        mov dword ptr ds : [edx], eax
        je public_6ec7eac
        mov ecx, 0x24
        lea esi, ss:[esp+0x10]
        rep movsd
        public_6ec7eac : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6ec7de0)
    }
}

#undef public_6ec7e1b
#undef public_6ec7e32
#undef public_6ec7e4e
#undef public_6ec7e8f
#undef public_6ec7eac
