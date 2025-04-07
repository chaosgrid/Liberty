#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417780);
CLANG_FORWARD_PROC_SYMBOL(public_417790);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_563d32 _public_563d32
#define public_563d74 _public_563d74
#define public_563d9b _public_563d9b

PROC_DECLARE(0x563cf0, internal_563cf0, public_563cf0);
extern "C" NAKED register_t __cdecl internal_563cf0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        push 6
        mov dword ptr ss : [esp+0x14], ecx
        call public_421670
        mov ebx, dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [ebx+4]
        add esp, 4
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov ebp, dword ptr ss : [esp+0x48]
        mov edi, 1
        add esp, 0xC
        cmp ebp, edi
        jbe public_563d9b
        lea esi, ds:[ebx+0x32]
        public_563d32 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi-2]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi-1]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        push eax
        push ecx
        push edx
        call public_421a70
        fld dword ptr ds : [esi-0xE]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi-0x12]
        fstp dword ptr ss : [esp]
        call public_421cc0
        lea eax, ss:[ebp-1]
        add esp, 0xC
        cmp edi, eax
        mov eax, 1
        je public_563d74
        lea eax, ds:[edi+1]
        public_563d74 : nop
        shl eax, 5
        fld dword ptr ds : [eax+ebx+4]
        add eax, ebx
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_421cc0
        add esp, 0xC
        inc edi
        add esi, 0x20
        cmp edi, ebp
        jb public_563d32
        public_563d9b : nop
        call public_421690
        mov eax, dword ptr ds : [public_67a484]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_417790
        fld dword ptr ds : [ebx]
        call public_5b7ec0
        fld dword ptr ds : [ebx+4]
        mov esi, eax
        call public_5b7ec0
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, eax
        shr edx, 0x10
        mov ecx, eax
        mov byte ptr ss : [esp+0x40], dl
        mov byte ptr ss : [esp+0x42], al
        lea edx, ss:[esp+0x40]
        shr ecx, 8
        shr eax, 0x18
        push edx
        mov byte ptr ss : [esp+0x45], cl
        mov byte ptr ss : [esp+0x47], al
        call public_417780
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push edx
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        shr eax, 1
        sub esi, eax
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], esi
        fild qword ptr ss : [esp+0x10]
        shr ecx, 1
        sub edi, ecx
        mov ecx, dword ptr ds : [ebx+0x18]
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        push eax
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x14]
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_417790
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x563cf0)
    }
}

#undef public_563d32
#undef public_563d74
#undef public_563d9b
