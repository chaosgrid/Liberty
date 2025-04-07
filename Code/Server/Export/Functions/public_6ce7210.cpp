#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7350);
CLANG_FORWARD_PROC_SYMBOL(public_6ce7630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0efe0);

#define public_6ce7257 _public_6ce7257
#define public_6ce7259 _public_6ce7259
#define public_6ce728b _public_6ce728b
#define public_6ce72c2 _public_6ce72c2
#define public_6ce72e3 _public_6ce72e3
#define public_6ce7310 _public_6ce7310
#define public_6ce7339 _public_6ce7339
#define public_6ce7343 _public_6ce7343

PROC_DECLARE(0x6ce7210, internal_6ce7210, public_6ce7210);
extern "C" NAKED register_t __cdecl internal_6ce7210()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ss : [esp+4], esi
        je public_6ce7343
        mov eax, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6ce7343
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        push ebx
        push ebp
        push edi
        mov ebp, 0xFFFFFFFB
        je public_6ce7257
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce7259
        public_6ce7257 : nop
        xor eax, eax
        public_6ce7259 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        push ebx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        push eax
        call dword ptr ds : [public_6d641e0]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6ce7310
        mov eax, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ss : [esp+0x1C]
        cmp eax, esi
        jae public_6ce728b
        mov esi, eax
        public_6ce728b : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        sub eax, 0x1A
        je public_6ce72c2
        dec eax
        jne public_6ce7339
        mov eax, dword ptr ds : [edi+0xC]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        lea ecx, ds:[eax-4]
        call public_6ce7630
        xor ecx, ecx
        mov esi, eax
        test esi, esi
        setg cl
        dec ecx
        and ecx, 0xFFFFFFFB
        mov ebp, ecx
        jmp public_6ce72e3
        public_6ce72c2 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        push eax
        push ebx
        lea ecx, ds:[edx-4]
        call public_6ce7350
        mov esi, eax
        xor eax, eax
        test esi, esi
        setg al
        dec eax
        and eax, 0xFFFFFFFB
        mov ebp, eax
        public_6ce72e3 : nop
        test ebp, ebp
        jne public_6ce7339
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d641dc]
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        lea eax, ds:[ecx-4]
        push ebx
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+0x24]
        push eax
        call public_6d0efe0
        pop edi
        mov eax, ebp
        pop ebp
        pop ebx
        pop esi
        pop ecx
        ret 0xC
        mov edi, edi
/*FIXUP public_6ce7310 : nop
        push offset public_6d654dc @0x6ce7310*/
  FIXUP public_6ce7310 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d654dc
        push 0x18C
/*FIXUP push offset public_6d654b0 @0x6ce731a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d654b0
        mov eax, 0x100002
/*FIXUP push offset public_6d65494 @0x6ce7324*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65494
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov ebp, 0xFFFFFFFE
        public_6ce7339 : nop
        pop edi
        mov eax, ebp
        pop ebp
        pop ebx
        pop esi
        pop ecx
        ret 0xC
        public_6ce7343 : nop
        mov eax, 0xFFFFFFFB
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ce7210)
    }
}

#undef public_6ce7257
#undef public_6ce7259
#undef public_6ce728b
#undef public_6ce72c2
#undef public_6ce72e3
#undef public_6ce7310
#undef public_6ce7339
#undef public_6ce7343
