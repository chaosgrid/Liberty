#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6cfb805 _public_6cfb805
#define public_6cfb81c _public_6cfb81c
#define public_6cfb81e _public_6cfb81e
#define public_6cfb846 _public_6cfb846
#define public_6cfb85a _public_6cfb85a
#define public_6cfb866 _public_6cfb866

PROC_DECLARE(0x6cfb760, internal_6cfb760, public_6cfb760);
extern "C" NAKED register_t __cdecl internal_6cfb760()
{
    __asm
    {
        mov eax, 0x2048
        call public_6d60160
        mov eax, dword ptr ss : [esp+0x204C]
        push ebx
        mov ebx, dword ptr ss : [esp+0x206C]
        push esi
        push eax
        mov esi, 0xFFFFFFFE
        mov dword ptr ds : [ebx], 0
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        test eax, eax
        je public_6cfb866
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        mov esi, dword ptr ss : [esp+0x205C]
        mov edx, dword ptr ss : [esp+0x2064]
        mov ecx, 0xC
        lea edi, ss:[esp+0x10]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2060]
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [esp+0x2068]
        mov dword ptr ss : [esp+0x48], ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0x800
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x50]
        xor edi, edi
        test eax, eax
        jbe public_6cfb85a
        lea edx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xC], edx
        public_6cfb805 : nop
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ss : [esp+0x2070]
        jae public_6cfb85a
        cmp edi, eax
        jae public_6cfb81c
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edx]
        jmp public_6cfb81e
        public_6cfb81c : nop
        xor esi, esi
        public_6cfb81e : nop
        lea eax, ss:[esp+0x10]
        push esi
        push eax
        call dword ptr ds : [public_6d644fc]
        add esp, 8
        test al, al
        jne public_6cfb846
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x206C]
        mov dword ptr ds : [edx+ecx*4], eax
        inc dword ptr ds : [ebx]
        public_6cfb846 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x50]
        inc edi
        add edx, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], edx
        jb public_6cfb805
        public_6cfb85a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x2048
        ret 
        public_6cfb866 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x2048
        ret 
        UNREACHABLE_TRAP(0x6cfb760)
    }
}

#undef public_6cfb805
#undef public_6cfb81c
#undef public_6cfb81e
#undef public_6cfb846
#undef public_6cfb85a
#undef public_6cfb866
