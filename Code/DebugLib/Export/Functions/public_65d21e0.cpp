#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1340);
CLANG_FORWARD_PROC_SYMBOL(public_65d21e0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c6a);
CLANG_FORWARD_PROC_SYMBOL(public_65d6ca0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d21fb _public_65d21fb
#define public_65d220e _public_65d220e
#define public_65d222a _public_65d222a
#define public_65d2258 _public_65d2258
#define public_65d22f9 _public_65d22f9
#define public_65d2305 _public_65d2305
#define public_65d2312 _public_65d2312
#define public_65d2327 _public_65d2327
#define public_65d232b _public_65d232b

PROC_DECLARE(0x65d21e0, internal_65d21e0, public_65d21e0);
extern "C" NAKED register_t __cdecl internal_65d21e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        cmp dword ptr ss : [ebp], 0xFFFFFFFF
        jne public_65d21fb
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_65d21fb : nop
        mov eax, dword ptr ss : [ebp+0x34]
        test eax, eax
        je public_65d220e
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_65d220e : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        mov esi, eax
        test esi, esi
        jne public_65d222a
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_65d222a : nop
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ss : [esp+0x20]
        not ecx
        mov edx, dword ptr ds : [eax]
        dec ecx
        mov ebx, ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        inc ebx
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_65d2258
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_65d2258 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+ebx+0xC]
        push eax
        mov dword ptr ss : [ebp+0x30], eax
        call public_65d6f71
        mov dword ptr ss : [ebp+0x34], eax
        mov dword ptr ss : [ebp+0x38], 0
        mov word ptr ds : [eax], 0xDEAD
        mov word ptr ds : [eax+2], 4
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[eax+0xC]
        not ecx
        mov dword ptr ds : [eax+4], ecx
        mov word ptr ds : [eax+8], bx
        mov dx, word ptr ss : [esp+0x14]
        mov ecx, ebx
        mov word ptr ds : [eax+0xA], dx
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        add esp, 4
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        lea esi, ss:[esp+0x18]
        push esi
        xor esi, esi
        mov si, word ptr ds : [eax+0xA]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        add eax, ebx
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x14]
        test eax, eax
        jne public_65d2327
        mov eax, dword ptr ss : [ebp+0x38]
        mov ecx, dword ptr ss : [ebp+0x30]
        mov edx, dword ptr ss : [ebp+0x34]
        xor esi, esi
        sub ecx, eax
        push esi
        add edx, eax
        mov eax, dword ptr ss : [ebp]
        push ecx
        push edx
        push eax
        call public_65d6ca0
        cmp eax, 0xFFFFFFFF
        jne public_65d2312
        call public_65d6c6a
        cmp eax, 0x2733
        jne public_65d2305
        public_65d22f9 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_65d2305 : nop
        push eax
        call public_65d1340
        add esp, 4
        xor bl, bl
        jmp public_65d232b
        public_65d2312 : nop
        mov edx, dword ptr ss : [ebp+0x38]
        mov ecx, dword ptr ss : [ebp+0x30]
        add edx, eax
        mov eax, edx
        mov dword ptr ss : [ebp+0x38], edx
        cmp eax, ecx
        jl public_65d22f9
        mov bl, 1
        jmp public_65d232b
        public_65d2327 : nop
        xor bl, bl
        xor esi, esi
        public_65d232b : nop
        mov ecx, dword ptr ss : [ebp+0x34]
        push ecx
        call public_65d6cb8
        add esp, 4
        mov dword ptr ss : [ebp+0x34], esi
        mov dword ptr ss : [ebp+0x30], esi
        mov dword ptr ss : [ebp+0x38], esi
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x65d21e0)
    }
}

#undef public_65d21fb
#undef public_65d220e
#undef public_65d222a
#undef public_65d2258
#undef public_65d22f9
#undef public_65d2305
#undef public_65d2312
#undef public_65d2327
#undef public_65d232b
