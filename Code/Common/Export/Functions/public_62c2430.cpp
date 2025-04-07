#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2430);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);

#define public_62c247b _public_62c247b
#define public_62c2495 _public_62c2495
#define public_62c24fa _public_62c24fa
#define public_62c2517 _public_62c2517
#define public_62c251c _public_62c251c
#define public_62c2533 _public_62c2533
#define public_62c25a5 _public_62c25a5
#define public_62c25b4 _public_62c25b4

PROC_DECLARE(0x62c2430, internal_62c2430, public_62c2430);
extern "C" NAKED register_t __cdecl internal_62c2430()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        push ebp
        push esi
        xor ebp, ebp
        test ebx, ebx
        push edi
        je public_62c25b4
        mov esi, dword ptr ss : [esp+0x60]
        test esi, esi
        je public_62c25b4
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        je public_62c247b
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [eax]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [edi]
        push eax
        call dword ptr ds : [ebx+0x128]
        jmp public_62c2495
        public_62c247b : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x64], eax
        call dword ptr ds : [edx+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, esi
        call dword ptr ds : [eax+0x128]
        public_62c2495 : nop
        test eax, eax
        jne public_62c25a5
        mov ecx, dword ptr ss : [esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [esi]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x130]
        mov ebx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [edi], eax
        jne public_62c24fa
        mov al, byte ptr ss : [esp+0x5C]
        test al, al
        mov eax, dword ptr ds : [esi]
        sete dl
        mov byte ptr ss : [esp+0x5C], dl
        mov ecx, dword ptr ss : [esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x130]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [edi], eax
        public_62c24fa : nop
        mov al, byte ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [esi]
        test al, al
        lea eax, ss:[esp+0x34]
        lea ecx, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, esi
        je public_62c2517
/*FIXUP push offset public_639f42c @0x62c2510*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f42c
        jmp public_62c251c
/*FIXUP public_62c2517 : nop
        push offset public_639f420 @0x62c2517*/
  FIXUP public_62c2517 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f420
        public_62c251c : nop
        call dword ptr ds : [edx+0xC0]
        test eax, eax
        je public_62c2533
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x48
        ret 
        public_62c2533 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edi]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x1C]
        fld dword ptr ds : [eax+4]
        push ecx
        fsub dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x2C]
        fld dword ptr ds : [eax]
        push edx
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        call public_62e1680
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        add esp, 8
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+8], eax
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        public_62c25a5 : nop
        pop edi
        mov ebp, 0xFFFFFFFC
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        public_62c25b4 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x62c2430)
    }
}

#undef public_62c247b
#undef public_62c2495
#undef public_62c24fa
#undef public_62c2517
#undef public_62c251c
#undef public_62c2533
#undef public_62c25a5
#undef public_62c25b4
