#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629ee63 _public_629ee63
#define public_629ee88 _public_629ee88
#define public_629eea6 _public_629eea6
#define public_629eec2 _public_629eec2

PROC_DECLARE(0x629ee00, internal_629ee00, public_629ee00);
extern "C" NAKED register_t __cdecl internal_629ee00()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        xor bl, bl
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_629eec2
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x68]
        mov bl, al
        test bl, bl
        je public_629eec2
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, dword ptr ss : [esp+0x8C]
        test esi, esi
        mov ebp, eax
        je public_629ee88
        mov eax, dword ptr ds : [public_63fc23c]
        test eax, eax
        jne public_629ee63
        call public_6391cf0
        mov dword ptr ds : [public_63fc23c], eax
        public_629ee63 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x44]
        push ecx
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        public_629ee88 : nop
        mov edi, dword ptr ss : [esp+0x90]
        test edi, edi
        je public_629eec2
        mov eax, dword ptr ds : [public_63fc23c]
        test eax, eax
        jne public_629eea6
        call public_6391cf0
        mov dword ptr ds : [public_63fc23c], eax
        public_629eea6 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x50]
        push ecx
        push ebp
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x1C]
        rep movsd
        public_629eec2 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x78
        ret 8
        UNREACHABLE_TRAP(0x629ee00)
    }
}

#undef public_629ee63
#undef public_629ee88
#undef public_629eea6
#undef public_629eec2
