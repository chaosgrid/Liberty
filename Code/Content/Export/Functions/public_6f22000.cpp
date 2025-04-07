#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fade8f);

#define public_6f22130 _public_6f22130
#define public_6f22145 _public_6f22145
#define public_6f22160 _public_6f22160
#define public_6f2217f _public_6f2217f
#define public_6f221b9 _public_6f221b9

PROC_DECLARE(0x6f22000, internal_6f22000, public_6f22000);
extern "C" NAKED register_t __cdecl internal_6f22000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fade8f @0x6f22002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fade8f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], 0
        je public_6f221b9
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        push esi
        push edi
        lea esi, ss:[ebp+8]
        lea edi, ds:[ebx+8]
        mov ecx, 0xF6
        rep movsd
        mov dl, byte ptr ss : [ebp+0x3E0]
        mov byte ptr ds : [ebx+0x3E0], dl
        mov eax, dword ptr ss : [ebp+0x3E4]
        mov dword ptr ds : [ebx+0x3E4], eax
        lea esi, ss:[ebp+0x3E8]
        lea edi, ds:[ebx+0x3E8]
        mov ecx, 0xD
        rep movsd
        lea edi, ds:[ebx+0x41C]
        lea esi, ss:[ebp+0x41C]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x44C]
        mov dword ptr ds : [ebx+0x44C], ecx
        mov edx, dword ptr ss : [ebp+0x450]
        mov dword ptr ds : [ebx+0x450], edx
        mov eax, dword ptr ss : [ebp+0x454]
        mov dword ptr ds : [ebx+0x454], eax
        mov ecx, dword ptr ss : [ebp+0x458]
        mov dword ptr ds : [ebx+0x458], ecx
        mov edx, dword ptr ss : [ebp+0x45C]
        mov dword ptr ds : [ebx+0x45C], edx
        mov eax, dword ptr ss : [ebp+0x460]
        mov dword ptr ds : [ebx+0x460], eax
        mov ecx, dword ptr ss : [ebp+0x464]
        mov dword ptr ds : [ebx+0x464], ecx
        mov edx, dword ptr ss : [ebp+0x468]
        mov dword ptr ds : [ebx+0x468], edx
        mov al, byte ptr ss : [ebp+0x46C]
        push 0xC
        mov byte ptr ds : [ebx+0x46C], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0x470], eax
        mov dword ptr ds : [ebx+0x474], 0
        mov edx, dword ptr ss : [ebp+0x470]
        mov ecx, dword ptr ds : [edx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x2C], ecx
        je public_6f2217f
        nop 
        public_6f22130 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f22145
        mov edi, eax
        public_6f22145 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f22160
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        public_6f22160 : nop
        mov edx, dword ptr ds : [ebx+0x474]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x10]
        inc edx
        mov dword ptr ds : [ebx+0x474], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6f22130
        public_6f2217f : nop
        lea esi, ss:[ebp+0x478]
        lea edi, ds:[ebx+0x478]
        mov ecx, 0xD
        rep movsd
        lea ecx, ss:[ebp+0x4AC]
        push ecx
        lea ecx, ds:[ebx+0x4AC]
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_6fb3084]
        mov dl, byte ptr ss : [ebp+0x4C4]
        pop edi
        pop esi
        mov byte ptr ds : [ebx+0x4C4], dl
        pop ebp
        public_6f221b9 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f22000)
    }
}

#undef public_6f22130
#undef public_6f22145
#undef public_6f22160
#undef public_6f2217f
#undef public_6f221b9
