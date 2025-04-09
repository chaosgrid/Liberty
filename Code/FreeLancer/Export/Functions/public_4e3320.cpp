#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8120);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);
CLANG_FORWARD_PROC_SYMBOL(public_55e5e0);

#define public_4e3393 _public_4e3393

PROC_DECLARE(0x4e3320, internal_4e3320, public_4e3320);
extern "C" NAKED register_t __cdecl internal_4e3320()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x16C]
        test al, al
        push edi
        push 0
        jne public_4e3393
        mov eax, dword ptr ds : [esi-0x364]
        lea ecx, ds:[esi-0x364]
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ds : [esi+0x164]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x2D0]
        and byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [public_5d8860]
        lea edi, ds:[esi+0x17C]
        push ecx
        mov ecx, edi
        call public_55e590
        mov edx, dword ptr ds : [esi+0x168]
        push 0x3F800000
        push 0x3DCCCCCD
        push edx
        mov ecx, edi
        call public_55e360
        mov ecx, edi
        pop edi
        pop esi
        add esp, 0xC
        jmp public_55e5e0
        public_4e3393 : nop
        push 1
        mov byte ptr ds : [esi+0x16C], 0
        call public_4c8120
        mov edi, dword ptr ds : [esi+0x2E4]
        mov ecx, dword ptr ds : [esi+0x2D4]
        mov eax, dword ptr ds : [ecx]
        add esp, 8
        xor edx, edx
        test edi, edi
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov edi, dword ptr ds : [esi+0x2E4]
        mov ecx, dword ptr ds : [esi+0x2D8]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp edi, 1
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov edi, dword ptr ds : [esi+0x2E4]
        mov ecx, dword ptr ds : [esi+0x2E0]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp edi, 2
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov dword ptr ss : [esp+8], 0x3DDF3B64
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ds:[esi-0x278]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0xC], 0x3CA3D70A
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        lea edx, ds:[esi-0x26C]
        mov dword ptr ss : [esp+8], 0xBECDD2F2
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0xC], 0xBEBDF3B6
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [public_5d8864]
        pop edi
        mov dword ptr ds : [esi+0x1F4], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4e3320)
    }
}

#undef public_4e3393
