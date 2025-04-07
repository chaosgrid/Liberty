#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e200);
CLANG_FORWARD_PROC_SYMBOL(public_636e3c0);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);

#define public_636e21c _public_636e21c
#define public_636e21e _public_636e21e
#define public_636e232 _public_636e232
#define public_636e246 _public_636e246
#define public_636e247 _public_636e247
#define public_636e271 _public_636e271
#define public_636e29b _public_636e29b

PROC_DECLARE(0x636e200, internal_636e200, public_636e200);
extern "C" NAKED register_t __cdecl internal_636e200()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        push ebx
        push esi
        push edi
        je public_636e29b
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ecx+eax*4+4]
        test esi, esi
        je public_636e21c
        dec esi
        jmp public_636e21e
        public_636e21c : nop
        mov esi, eax
        public_636e21e : nop
        mov edi, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edi], 0
        jne public_636e232
        push esi
        call public_636e920
        add esp, 4
        mov dword ptr ds : [edi], eax
        public_636e232 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+edx*4+4]
        test ebx, ebx
        lea ecx, ds:[eax+edx*4+4]
        jne public_636e246
        mov ebx, edx
        jmp public_636e247
        public_636e246 : nop
        dec ebx
        public_636e247 : nop
        push ebp
        lea ebp, ds:[ebx+esi]
        cmp ebp, edx
        jle public_636e271
        push esi
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_636e3c0
        mov dword ptr ds : [edi], eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_636e740
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        lea ecx, ds:[eax+ecx*4+4]
        public_636e271 : nop
        inc ebp
        test esi, esi
        mov dword ptr ds : [ecx], ebp
        pop ebp
        jle public_636e29b
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[esi*4+4]
        lea esi, ds:[edx+4]
        mov edx, ecx
        shr ecx, 2
        lea edi, ds:[eax+ebx*4+4]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_636e29b : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e200)
    }
}

#undef public_636e21c
#undef public_636e21e
#undef public_636e232
#undef public_636e246
#undef public_636e247
#undef public_636e271
#undef public_636e29b
