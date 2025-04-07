#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be260);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62be284 _public_62be284
#define public_62be29e _public_62be29e
#define public_62be2ba _public_62be2ba
#define public_62be2d8 _public_62be2d8
#define public_62be2f5 _public_62be2f5

PROC_DECLARE(0x62be260, internal_62be260, public_62be260);
extern "C" NAKED register_t __cdecl internal_62be260()
{
    __asm
    {
        sub esp, 0x108
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x114]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        mov byte ptr ss : [esp+0x10], bl
        jne public_62be284
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jmp public_62be2ba
        public_62be284 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x104
        jb public_62be29e
        mov eax, 0x103
        public_62be29e : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x10]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x10], bl
        mov dword ptr ss : [esp+0xC], eax
        public_62be2ba : nop
        mov esi, dword ptr ds : [public_63fc4c8]
        mov edi, dword ptr ds : [esi+4]
        push 0x110
        call public_6391d9c
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_62be2d8
        mov edi, eax
        public_62be2d8 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        cmp edi, ebx
        mov dword ptr ds : [ecx], eax
        je public_62be2f5
        mov ecx, 0x42
        lea esi, ss:[esp+0xC]
        rep movsd
        public_62be2f5 : nop
        mov eax, dword ptr ds : [public_63fc4cc]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc4cc], eax
        pop ebx
        add esp, 0x108
        ret 
        UNREACHABLE_TRAP(0x62be260)
    }
}

#undef public_62be284
#undef public_62be29e
#undef public_62be2ba
#undef public_62be2d8
#undef public_62be2f5
