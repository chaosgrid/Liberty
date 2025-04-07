#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62c32bd _public_62c32bd
#define public_62c3323 _public_62c3323
#define public_62c3351 _public_62c3351
#define public_62c3367 _public_62c3367

PROC_DECLARE(0x62c31c0, internal_62c31c0, public_62c31c0);
extern "C" NAKED register_t __cdecl internal_62c31c0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push edi
        push ecx
        mov ecx, esi
        call public_62d2090
        xor ebx, ebx
        cmp al, bl
        mov byte ptr ss : [esp+0x30], al
        je public_62c3367
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x30]
        push ebp
        push edi
        push eax
        lea ebp, ds:[esi+0x30]
        push ecx
        mov ecx, ebp
        mov byte ptr ds : [esi+0x398], bl
        mov byte ptr ds : [esi+0x39B], bl
        call dword ptr ds : [edx]
        push ebx
        mov ecx, ebp
        call public_62d5980
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x2DC]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x2DC]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0xA8]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0xA8]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x168]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x168]
        push eax
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x44C], ebx
        mov dword ptr ds : [esi+0x448], ebx
        mov dword ptr ds : [esi+0x444], ebx
        mov cl, byte ptr ds : [esi+0x28]
        and cl, 0xFD
        push ebx
        mov byte ptr ds : [esi+0x28], cl
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
/*FIXUP push offset public_639e5b8 @0x62c327f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e5b8
        call dword ptr ds : [edx+0xC0]
        test eax, eax
        pop ebp
        jne public_62c3351
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        cmp al, bl
        jne public_62c32bd
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c32bd : nop
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [edi+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [edi+0x10]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [edi+0x14]
        lea edi, ds:[esi+0x430]
        mov esi, dword ptr ds : [esi+0x24]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [esi+0x1580]
        mov eax, dword ptr ds : [ecx]
        add esi, 0x14FC
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc528]
        cmp eax, ebx
        jne public_62c3323
        call public_6391cf0
        mov dword ptr ds : [public_63fc528], eax
        public_62c3323 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], eax
        mov al, byte ptr ss : [esp+0x30]
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 0xC
        public_62c3351 : nop
        mov al, byte ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0x430], ebx
        mov dword ptr ds : [esi+0x434], ebx
        mov dword ptr ds : [esi+0x438], ebx
        public_62c3367 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x62c31c0)
    }
}

#undef public_62c32bd
#undef public_62c3323
#undef public_62c3351
#undef public_62c3367
