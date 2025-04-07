#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f020a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9968);

#define public_6ea7da6 _public_6ea7da6
#define public_6ea7db9 _public_6ea7db9
#define public_6ea7e08 _public_6ea7e08
#define public_6ea7e0f _public_6ea7e0f
#define public_6ea7e33 _public_6ea7e33
#define public_6ea7e37 _public_6ea7e37
#define public_6ea7e7e _public_6ea7e7e
#define public_6ea7e99 _public_6ea7e99
#define public_6ea7eb3 _public_6ea7eb3

PROC_DECLARE(0x6ea7d20, internal_6ea7d20, public_6ea7d20);
extern "C" NAKED register_t __cdecl internal_6ea7d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9968 @0x6ea7d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9968
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        or eax, 0xFFFFFFFF
        mov ebx, ecx
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x60], edi
        mov ebp, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [ebp+0x44]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [esp+0x20], edx
        xor edx, edx
        cmp ecx, edi
        mov dword ptr ss : [esp+0x6C], edi
        mov dword ptr ss : [esp+0x44], ecx
        jle public_6ea7db9
        mov esi, eax
        lea edi, ss:[esp+0x14]
        lea ecx, ss:[esp+0x24]
        sub esi, edi
        public_6ea7da6 : nop
        mov edi, dword ptr ds : [esi+ecx]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ss : [esp+0x44]
        inc edx
        add ecx, 4
        cmp edx, edi
        jl public_6ea7da6
        xor edi, edi
        public_6ea7db9 : nop
        lea esi, ds:[ebx+0x44]
        push esi
        push eax
        call dword ptr ds : [public_6fb35f4]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ss : [ebp+0x70]
        add esp, 8
        cmp eax, edi
        mov dword ptr ss : [esp+0x4C], ecx
        jne public_6ea7e08
        mov eax, dword ptr ss : [ebp+0x48]
        mov ecx, dword ptr ss : [ebp+0x44]
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        push ecx
        call dword ptr ds : [public_6fb35f8]
        mov edx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        call public_6f020a0
        add esp, 0x14
        mov dword ptr ss : [esp+0x50], eax
        jmp public_6ea7e0f
        public_6ea7e08 : nop
        lea ecx, ss:[ebp+0x74]
        mov dword ptr ss : [esp+0x50], ecx
        public_6ea7e0f : nop
        mov eax, dword ptr ss : [ebp+0x48]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        je public_6ea7e33
        mov edx, dword ptr ss : [ebp+0x44]
        push eax
        push edx
        call dword ptr ds : [public_6fb35fc]
        add esp, 8
        mov dword ptr ss : [esp+0x58], eax
        jmp public_6ea7e37
        public_6ea7e33 : nop
        mov dword ptr ss : [esp+0x58], edi
        public_6ea7e37 : nop
        mov eax, dword ptr ss : [ebp+0x40]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ecx
        call dword ptr ds : [public_6fb3600]
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx+0x40], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ss : [ebp+0x44]
        mov dword ptr ds : [ebx+0x10], edx
        mov eax, dword ptr ss : [ebp+0x48]
        lea esi, ss:[ebp+0x50]
        add esp, 4
        cmp esi, edi
        mov dword ptr ds : [ebx+0x18], eax
        jne public_6ea7e7e
        mov dword ptr ds : [ebx+0x1C], edi
        mov byte ptr ds : [ebx+0x20], 0
        jmp public_6ea7eb3
        public_6ea7e7e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ds:[ebx+0x20]
        jb public_6ea7e99
        mov eax, 0x1F
        public_6ea7e99 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x20], 0
        mov dword ptr ds : [ebx+0x1C], eax
        public_6ea7eb3 : nop
        mov eax, dword ptr ss : [ebp+0xB4]
        mov dword ptr ds : [ebx+0x4C], eax
        mov ecx, dword ptr ss : [ebp+0x40]
        pop edi
        mov dword ptr ds : [ebx+0x48], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x6ea7d20)
    }
}

#undef public_6ea7da6
#undef public_6ea7db9
#undef public_6ea7e08
#undef public_6ea7e0f
#undef public_6ea7e33
#undef public_6ea7e37
#undef public_6ea7e7e
#undef public_6ea7e99
#undef public_6ea7eb3
