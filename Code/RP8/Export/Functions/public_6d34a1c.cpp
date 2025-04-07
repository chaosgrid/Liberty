#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d34a1c);

#define public_6d34a57 _public_6d34a57
#define public_6d34a7b _public_6d34a7b
#define public_6d34b2d _public_6d34b2d
#define public_6d34b52 _public_6d34b52

PROC_DECLARE(0x6d34a1c, internal_6d34a1c, public_6d34a1c);
extern "C" NAKED register_t __cdecl internal_6d34a1c()
{
    __asm
    {
        sub esp, 0x20
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        push ebp
        mov ebp, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [edx+0x18]
        push esi
        mov esi, dword ptr ds : [edx+0x105C]
        push edi
        mov edi, dword ptr ds : [edx+0x1050]
        imul esi, edi
        add esi, eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x28], esi
        jae public_6d34b52
        push ebx
        public_6d34a57 : nop
        mov edx, dword ptr ds : [edx+0x1058]
        add edx, eax
        add edi, eax
        cmp eax, edx
        mov ebx, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x24], edx
        jae public_6d34b2d
        public_6d34a7b : nop
        movzx ebp, byte ptr ds : [ebx]
        movzx esi, byte ptr ds : [ebx+1]
        movzx eax, byte ptr ds : [edi+1]
        movzx edi, byte ptr ds : [edi]
        mov edx, eax
        push 0xF
        pop ecx
        and edx, ecx
        mov ebx, ebp
        and ebx, ecx
        add edx, ebx
        mov ebx, edi
        and ebx, ecx
        add edx, ebx
        mov ebx, esi
        and ebx, ecx
        lea edx, ds:[edx+ebx+2]
        mov ecx, eax
        and ecx, 0xFFFF00F0
        mov ebx, ebp
        and ebx, 0xFFFF00F0
        add ecx, ebx
        mov ebx, edi
        and ebx, 0xFFFF00F0
        add ecx, ebx
        mov ebx, esi
        and ebx, 0xFFFF00F0
        shr edx, 2
        lea ecx, ds:[ecx+ebx+0x20]
        mov ebx, dword ptr ss : [esp+0x14]
        shr ecx, 2
        xor dl, cl
        mov ecx, 0xF0
        and ax, cx
        and bp, cx
        and di, cx
        and si, cx
        and dl, 0xF
        add eax, ebp
        add eax, edi
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+esi+0x20]
        shr eax, 2
        xor dl, al
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ss : [esp+0x10]
        inc ebx
        inc ebx
        inc edi
        inc edi
        cmp ebx, dword ptr ss : [esp+0x24]
        mov byte ptr ds : [eax], dl
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], edi
        jb public_6d34a7b
        mov ecx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x2C]
        public_6d34b2d : nop
        mov edx, dword ptr ds : [ecx+4]
        add ebp, dword ptr ds : [edx+0x1050]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+0x1050]
        lea eax, ds:[eax+edi*2]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], eax
        jb public_6d34a57
        pop ebx
        public_6d34b52 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6d34a1c)
    }
}

#undef public_6d34a57
#undef public_6d34a7b
#undef public_6d34b2d
#undef public_6d34b52
