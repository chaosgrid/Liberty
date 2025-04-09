#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445620);
CLANG_FORWARD_PROC_SYMBOL(public_445700);
CLANG_FORWARD_PROC_SYMBOL(public_44fa60);

#define public_452510 _public_452510
#define public_45252e _public_45252e
#define public_4525dc _public_4525dc
#define public_4525e8 _public_4525e8
#define public_4525f4 _public_4525f4
#define public_452642 _public_452642
#define public_45266f _public_45266f

PROC_DECLARE(0x452460, internal_452460, public_452460);
extern "C" NAKED register_t __cdecl internal_452460()
{
    __asm
    {
        sub esp, 0xBC
        push ebx
        mov ebx, dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ds : [ebx+0x48]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC8]
        mov ecx, dword ptr ss : [ebp+0x64]
        push esi
        push edi
        push eax
        call public_445620
        mov ecx, dword ptr ds : [ebx+0x30]
        mov esi, eax
        push ecx
        push esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_44fa60
        add esp, 8
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_45266f
        cmp eax, 0xFFFFFFFF
        je public_45266f
        mov edx, dword ptr ss : [esp+0xD8]
        push edx
        lea eax, ss:[esp+0x1C]
        lea esi, ss:[ebp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6270]
        mov ecx, dword ptr ss : [esp+0xDC]
        push ecx
        lea edx, ss:[esp+0xAC]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c6274]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, 9
        lea esi, ss:[esp+0xA8]
        lea edi, ss:[esp+0x84]
        rep movsd
        mov edi, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x20]
        xor ebx, ebx
        lea eax, ss:[ebp+0x2A8]
        lea esp, ss:[esp]
        public_452510 : nop
        cmp byte ptr ds : [eax], 0
        je public_45252e
        inc ebx
        add eax, 0x3C
        cmp ebx, 0x20
        jl public_452510
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_45252e : nop
        cmp ebx, 0xFFFFFFFF
        je public_45266f
        imul ebx, 0x3C
        mov dword ptr ds : [ebx+ebp+0x274], edi
        lea eax, ds:[ebx+ebp+0x278]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], esi
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ebx+ebp+0x2A8], 1
        lea edi, ds:[ebx+ebp+0x284]
        mov ecx, 9
        lea esi, ss:[esp+0x84]
        rep movsd
        lea ecx, ds:[ebx+ebp+0x278]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ebx+ebp+0x284]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0x38], edx
        mov dl, byte ptr ds : [eax+0x40]
        test dl, dl
        fld dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x24], offset public_5c865c
        fstp dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x30], ecx
        je public_4525dc
        mov edx, dword ptr ds : [eax+0x30]
        mov esi, ecx
        or esi, 0x40
        cmp edx, 1
        mov dword ptr ss : [esp+0x30], esi
        jne public_4525dc
        mov edx, esi
        or edx, 0x80
        mov dword ptr ss : [esp+0x30], edx
        public_4525dc : nop
        mov dl, byte ptr ds : [eax+0x41]
        test dl, dl
        je public_4525e8
        or dword ptr ss : [esp+0x30], 0x20
        public_4525e8 : nop
        test cl, cl
        jns public_4525f4
        or dword ptr ss : [esp+0x30], 0x100
        public_4525f4 : nop
        mov eax, dword ptr ds : [eax+0x44]
        mov edx, dword ptr ss : [ebp+0x64]
        mov edx, dword ptr ds : [edx+0x30]
        mov ecx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        lea esi, ds:[ebx+ebp+0x270]
        push esi
        push edx
        push ecx
        call dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x64]
        mov edi, eax
        call public_445700
        test edi, edi
        jne public_452642
        pop edi
        pop esi
        mov byte ptr ds : [ebx+ebp+0x2A9], 1
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_452642 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cd318 @0x452648*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd318
        push 0x213
/*FIXUP push offset public_5cd2e4 @0x452652*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd2e4
        mov eax, 0x100004
/*FIXUP push offset public_5c7688 @0x45265c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7688
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov byte ptr ds : [ebx+ebp+0x2A9], 0
        public_45266f : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0xBC
        ret 0x10
        UNREACHABLE_TRAP(0x452460)
    }
}

#undef public_452510
#undef public_45252e
#undef public_4525dc
#undef public_4525e8
#undef public_4525f4
#undef public_452642
#undef public_45266f
