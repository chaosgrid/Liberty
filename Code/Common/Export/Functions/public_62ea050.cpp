#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ea050);
CLANG_FORWARD_PROC_SYMBOL(public_62ea770);
CLANG_FORWARD_PROC_SYMBOL(public_62ea960);

#define public_62ea067 _public_62ea067
#define public_62ea07b _public_62ea07b
#define public_62ea09f _public_62ea09f
#define public_62ea0c8 _public_62ea0c8
#define public_62ea0df _public_62ea0df
#define public_62ea0eb _public_62ea0eb
#define public_62ea105 _public_62ea105
#define public_62ea107 _public_62ea107
#define public_62ea180 _public_62ea180
#define public_62ea182 _public_62ea182
#define public_62ea1d2 _public_62ea1d2
#define public_62ea1d4 _public_62ea1d4
#define public_62ea1f6 _public_62ea1f6
#define public_62ea213 _public_62ea213

PROC_DECLARE(0x62ea050, internal_62ea050, public_62ea050);
extern "C" NAKED register_t __cdecl internal_62ea050()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x1094]
        test al, al
        jne public_62ea067
        xor al, al
        pop esi
        add esp, 0x1C
        ret 
        public_62ea067 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x1434]
        test ecx, ecx
        je public_62ea07b
        xor al, al
        pop esi
        add esp, 0x1C
        ret 
        public_62ea07b : nop
        mov ecx, dword ptr ds : [esi+0x1080]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [eax+0x1580]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62ea09f
        mov dword ptr ss : [esp+0xC], 0
        public_62ea09f : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0xBC]
        mov eax, dword ptr ds : [esi+0x830]
        test eax, eax
        mov byte ptr ss : [esp+7], cl
        mov dword ptr ss : [esp+0x10], 0
        jbe public_62ea213
        push ebx
        push ebp
        push edi
        lea ebx, ds:[esi+0x32]
        public_62ea0c8 : nop
        fld dword ptr ds : [ebx+0x16]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62ea0df
        mov al, byte ptr ds : [ebx+2]
        test al, al
        jne public_62ea0eb
        public_62ea0df : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_62ea1f6
        public_62ea0eb : nop
        cmp byte ptr ds : [ebx], 0
        je public_62ea1f6
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ea105
        lea ecx, ds:[eax-8]
        jmp public_62ea107
        public_62ea105 : nop
        xor ecx, ecx
        public_62ea107 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0xB
        lea edi, ds:[ebx-2]
        push edi
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x11C]
        test eax, eax
        jne public_62ea1f6
        test dword ptr ss : [esp+0x14], 0x3FFFFFFF
        je public_62ea1f6
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+4]
        mov ebp, eax
        test ebp, ebp
        je public_62ea1f6
        mov ecx, dword ptr ds : [esi+0x1084]
        xor edx, edx
        mov dx, word ptr ds : [edi]
        push ecx
        push ebp
        mov ecx, esi
        push edx
        call public_62ea770
        cmp eax, 1
        jne public_62ea1f6
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov byte ptr ss : [esp+0x12], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ea180
        lea ecx, ds:[eax-8]
        jmp public_62ea182
        public_62ea180 : nop
        xor ecx, ecx
        public_62ea182 : nop
        mov eax, dword ptr ds : [ecx]
        push 0x3D567750
        push edi
        lea edx, ss:[esp+0x1A]
        push edx
        call dword ptr ds : [eax+0x10C]
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_62ea1f6
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        xor edx, edx
        mov dx, word ptr ds : [public_63a4aa4]
        push eax
        push ecx
        push 1
        push edx
        push ebp
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, esi
        call public_62ea960
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ea1d2
        add eax, 0xFFFFFFF8
        jmp public_62ea1d4
        public_62ea1d2 : nop
        xor eax, eax
        public_62ea1d4 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push 0xFFFFFFFF
        lea eax, ss:[esp+0x24]
        push eax
        push 1
        push edi
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [ebx+6]
        test eax, eax
        je public_62ea1f6
        fld dword ptr ds : [ebx+0x12]
        fchs 
        fstp dword ptr ds : [ebx+0x16]
        public_62ea1f6 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x830]
        inc eax
        add ebx, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_62ea0c8
        pop edi
        pop ebp
        pop ebx
        public_62ea213 : nop
        mov al, 1
        pop esi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62ea050)
    }
}

#undef public_62ea067
#undef public_62ea07b
#undef public_62ea09f
#undef public_62ea0c8
#undef public_62ea0df
#undef public_62ea0eb
#undef public_62ea105
#undef public_62ea107
#undef public_62ea180
#undef public_62ea182
#undef public_62ea1d2
#undef public_62ea1d4
#undef public_62ea1f6
#undef public_62ea213
