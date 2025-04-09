#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc30);
CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_42d4c0);
CLANG_FORWARD_PROC_SYMBOL(public_42d4f0);
CLANG_FORWARD_PROC_SYMBOL(public_48d140);

#define public_48d1c9 _public_48d1c9
#define public_48d1d6 _public_48d1d6
#define public_48d214 _public_48d214
#define public_48d285 _public_48d285
#define public_48d2be _public_48d2be
#define public_48d2cc _public_48d2cc
#define public_48d2fe _public_48d2fe
#define public_48d343 _public_48d343

PROC_DECLARE(0x48d140, internal_48d140, public_48d140);
extern "C" NAKED register_t __cdecl internal_48d140()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [ebp+0x378]
        test esi, esi
        jl public_48d343
        mov edx, dword ptr ss : [ebp+0x394]
        lea esi, ds:[esi+esi*2]
        shl esi, 5
        add esi, edx
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_5c63e0]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_5c7080]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x350]
        test eax, eax
        lea ebx, ss:[ebp+0x34C]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], eax
        je public_48d1c9
        mov al, byte ptr ds : [eax-1]
        test al, al
        je public_48d1c9
        cmp al, 0xFF
        je public_48d1c9
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        mov edi, dword ptr ss : [esp+0x14]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c7088]
        mov edi, dword ptr ss : [esp+0x10]
        public_48d1c9 : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp eax, edi
        jae public_48d1d6
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        public_48d1d6 : nop
        test edi, edi
        jbe public_48d214
        mov ecx, dword ptr ds : [ebx+4]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_5c709c]
        mov eax, dword ptr ds : [ebx+8]
        add esp, 0xC
        sub eax, edi
        push 0
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_48d214
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_48d214 : nop
        lea edi, ss:[ebp+0x35C]
        mov ecx, edi
        call public_42cc50
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_5c707c]
        mov ecx, edi
        call public_42cc30
        mov edi, dword ptr ss : [esp+0x18]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push 1
        mov dword ptr ss : [esp+0x18], ecx
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_48d285
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
/*FIXUP public_48d285 : nop
        push offset public_5d2d7c @0x48d285*/
  FIXUP public_48d285 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2d7c
        lea ecx, ss:[ebp+0x35C]
        call public_42d4c0
        test al, al
        jne public_48d2be
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d2d7c @0x48d29f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2d7c
        push 0x3AF
/*FIXUP push offset public_5d2d48 @0x48d2a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2d48
        mov eax, 0x100001
/*FIXUP push offset public_5d2d10 @0x48d2b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2d10
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_48d2be : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov eax, dword ptr ds : [public_5c7078]
        je public_48d2cc
        mov eax, ebx
/*FIXUP public_48d2cc : nop
        push offset public_5d2cdc @0x48d2cc*/
  FIXUP public_48d2cc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2cdc
        push eax
        lea ecx, ss:[ebp+0x35C]
        call public_42d4f0
        mov esi, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [ebp+0x3A0]
        mov ecx, dword ptr ss : [ebp+0x39C]
        mov eax, dword ptr ds : [ecx]
        xor edi, edi
        cmp esi, edx
        jae public_48d2fe
        mov eax, dword ptr ds : [ecx+esi*4]
        mov edi, dword ptr ds : [esi*4+public_611bf0]
        public_48d2fe : nop
        mov ecx, dword ptr ss : [ebp+0x450]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0x450]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 3
        call dword ptr ds : [eax+0xA8]
        mov ebp, dword ptr ss : [ebp+0x450]
        mov edx, dword ptr ss : [ebp]
        push 0
        push 0
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 0x10
        ret 
        public_48d343 : nop
        mov ebp, dword ptr ss : [ebp+0x450]
        mov eax, dword ptr ss : [ebp]
        push 0
        push 1
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax+0xA8]
        pop esi
        pop ebp
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x48d140)
    }
}

#undef public_48d1c9
#undef public_48d1d6
#undef public_48d214
#undef public_48d285
#undef public_48d2be
#undef public_48d2cc
#undef public_48d2fe
#undef public_48d343
