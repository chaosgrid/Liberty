#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62684f0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);

#define public_626435b _public_626435b
#define public_6264376 _public_6264376
#define public_626438d _public_626438d
#define public_626444c _public_626444c
#define public_6264450 _public_6264450
#define public_626447b _public_626447b
#define public_626449f _public_626449f
#define public_62644cb _public_62644cb
#define public_62644d0 _public_62644d0
#define public_62644fb _public_62644fb
#define public_626451f _public_626451f
#define public_6264560 _public_6264560
#define public_6264593 _public_6264593
#define public_62645b9 _public_62645b9

PROC_DECLARE(0x6264340, internal_6264340, public_6264340);
extern "C" NAKED register_t __cdecl internal_6264340()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        lea esi, ss:[ebp+8]
        xor eax, eax
        cmp esi, eax
        push edi
        mov ebx, ecx
        jne public_626435b
        mov byte ptr ds : [ebx+8], al
        jmp public_626438d
        public_626435b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ds:[ebx+8]
        jb public_6264376
        mov eax, 0x3F
        public_6264376 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+8], 0
        public_626438d : nop
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx+0x48], eax
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], ecx
        mov edx, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x50], edx
        mov eax, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [ebx+0x54], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], ecx
        mov edx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [ebx+0x5C], edx
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [ebx+0x60], eax
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [ebx+0x64], ecx
        mov edx, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x6C], eax
        mov cl, byte ptr ss : [ebp+0x70]
        mov byte ptr ds : [ebx+0x70], cl
        mov edx, dword ptr ss : [ebp+0x74]
        mov dword ptr ds : [ebx+0x74], edx
        mov eax, dword ptr ss : [ebp+0x78]
        mov dword ptr ds : [ebx+0x78], eax
        mov ecx, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [ebx+0x7C], ecx
        mov edx, dword ptr ss : [ebp+0x80]
        mov dword ptr ds : [ebx+0x80], edx
        mov eax, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [ebx+0x84], eax
        mov ecx, dword ptr ss : [ebp+0x88]
        mov dword ptr ds : [ebx+0x88], ecx
        mov edx, dword ptr ss : [ebp+0x8C]
        mov dword ptr ds : [ebx+0x8C], edx
        mov eax, dword ptr ss : [ebp+0x90]
        mov dword ptr ds : [ebx+0x90], eax
        lea ecx, ss:[ebp+0x94]
        lea eax, ds:[ebx+0x94]
        cmp eax, ecx
        je public_626449f
        mov esi, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x20], ecx
        je public_626447b
        jmp public_6264450
        public_626444c : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6264450 : nop
        cmp ecx, edi
        je public_626447b
        lea esi, ds:[ecx+8]
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        mov esi, ecx
        jne public_626444c
        public_626447b : nop
        push esi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ds:[ebx+0x94]
        call public_62728a0
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ecx
        push esi
        lea ecx, ds:[ebx+0x94]
        call public_62684f0
        public_626449f : nop
        lea ecx, ss:[ebp+0xA0]
        lea eax, ds:[ebx+0xA0]
        cmp eax, ecx
        je public_626451f
        mov esi, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x20], ecx
        je public_62644fb
        jmp public_62644d0
        public_62644cb : nop
        mov ecx, dword ptr ss : [esp+0x20]
        nop 
        public_62644d0 : nop
        cmp ecx, edi
        je public_62644fb
        mov edx, dword ptr ss : [esp+0x20]
        lea esi, ds:[ecx+8]
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ds : [edx]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov esi, ecx
        jne public_62644cb
        public_62644fb : nop
        push esi
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ds:[ebx+0xA0]
        call public_62728a0
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        push esi
        lea ecx, ds:[ebx+0xA0]
        call public_62684f0
        public_626451f : nop
        lea ecx, ss:[ebp+0xAC]
        lea eax, ds:[ebx+0xAC]
        cmp eax, ecx
        je public_62645b9
        mov esi, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [esi]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x24], edi
        call public_632c410
        cmp edi, esi
        mov eax, dword ptr ss : [ebp+0xB0]
        mov dword ptr ss : [esp+0x18], eax
        je public_6264593
        mov eax, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6264560 : nop
        cmp eax, dword ptr ss : [esp+0x18]
        je public_6264593
        add edi, 8
        lea esi, ds:[eax+8]
        mov ecx, 8
        rep movsd
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x10], eax
        mov esi, edx
        mov edi, ecx
        jne public_6264560
        public_6264593 : nop
        push esi
        push edi
        lea eax, ss:[esp+0x28]
        lea edi, ds:[ebx+0xAC]
        push eax
        mov ecx, edi
        call public_62728a0
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push esi
        mov ecx, edi
        call public_62684f0
        public_62645b9 : nop
        mov eax, dword ptr ss : [ebp+0xB8]
        pop edi
        mov dword ptr ds : [ebx+0xB8], eax
        mov ecx, dword ptr ss : [ebp+0xBC]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0xBC], ecx
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6264340)
    }
}

#undef public_626435b
#undef public_6264376
#undef public_626438d
#undef public_626444c
#undef public_6264450
#undef public_626447b
#undef public_626449f
#undef public_62644cb
#undef public_62644d0
#undef public_62644fb
#undef public_626451f
#undef public_6264560
#undef public_6264593
#undef public_62645b9
