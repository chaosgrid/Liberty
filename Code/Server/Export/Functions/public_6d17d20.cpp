#include "Server-PCH.h"


#define public_6d17d92 _public_6d17d92
#define public_6d17de0 _public_6d17de0
#define public_6d17e03 _public_6d17e03
#define public_6d17e1d _public_6d17e1d
#define public_6d17e52 _public_6d17e52
#define public_6d17e5f _public_6d17e5f

PROC_DECLARE(0x6d17d20, internal_6d17d20, public_6d17d20);
extern "C" NAKED register_t __cdecl internal_6d17d20()
{
    __asm
    {
        sub esp, 0x120
        mov eax, dword ptr ss : [esp+0x128]
        mov eax, dword ptr ds : [eax]
        test eax, 0x3FFFFFFF
        push ebp
        mov ebp, 0xFFFFFFFE
        mov dword ptr ss : [esp+4], ebp
        je public_6d17e5f
        mov ecx, dword ptr ss : [esp+0x128]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        je public_6d17e5f
        cmp eax, dword ptr ds : [public_6d8e578]
        push ebx
        push esi
        push edi
        jne public_6d17d92
        mov eax, dword ptr ds : [public_6d8e57c]
        mov edx, dword ptr ss : [esp+0x13C]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [public_6d8e580]
        pop edi
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [public_6d8e584]
        pop esi
        xor ebp, ebp
        mov dword ptr ds : [edx+8], eax
        pop ebx
        mov eax, ebp
        pop ebp
        add esp, 0x120
        ret 
        public_6d17d92 : nop
        push ecx
        call dword ptr ds : [public_6d644f4]
        xor ebx, ebx
        mov esi, eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        mov dword ptr ss : [esp+0x78], ebx
        mov byte ptr ss : [esp+0x7C], bl
        mov dword ptr ss : [esp+0xA8], ebx
        mov byte ptr ss : [esp+0xAC], bl
        mov dword ptr ss : [esp+0xEC], ebx
        mov byte ptr ss : [esp+0xF0], bl
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jbe public_6d17e52
        lea ecx, ds:[ecx]
        public_6d17de0 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        test al, al
        je public_6d17e03
        mov eax, dword ptr ss : [esp+0x138]
        mov edx, dword ptr ss : [esp+0x98]
        cmp edx, dword ptr ds : [eax]
        je public_6d17e1d
        public_6d17e03 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, eax
        jb public_6d17de0
        mov ebp, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov eax, ebp
        pop ebp
        add esp, 0x120
        ret 
        public_6d17e1d : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ss : [esp+0x13C]
        mov dword ptr ds : [public_6d8e578], eax
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [public_6d8e57c], eax
        mov dword ptr ds : [public_6d8e580], ecx
        mov dword ptr ds : [public_6d8e584], edx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        xor ebp, ebp
        public_6d17e52 : nop
        pop edi
        pop esi
        pop ebx
        mov eax, ebp
        pop ebp
        add esp, 0x120
        ret 
        public_6d17e5f : nop
        mov eax, 0xFFFFFFFE
        pop ebp
        add esp, 0x120
        ret 
        UNREACHABLE_TRAP(0x6d17d20)
    }
}

#undef public_6d17d92
#undef public_6d17de0
#undef public_6d17e03
#undef public_6d17e1d
#undef public_6d17e52
#undef public_6d17e5f
