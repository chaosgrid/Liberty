#include "Deformable2-PCH.h"


#define public_65f7295 _public_65f7295
#define public_65f72d0 _public_65f72d0
#define public_65f72e0 _public_65f72e0
#define public_65f7303 _public_65f7303
#define public_65f7316 _public_65f7316
#define public_65f7325 _public_65f7325
#define public_65f7327 _public_65f7327

PROC_DECLARE(0x65f7240, internal_65f7240, public_65f7240);
extern "C" NAKED register_t __cdecl internal_65f7240()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [public_6603148]
        push edx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ds : [esi]
        push esi
        mov ebx, eax
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        setne al
        test al, al
        jne public_65f7295
        mov eax, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [esi]
        push 0
        push ebp
        push edx
        push esi
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        setge al
        test al, al
        je public_65f7327
        public_65f7295 : nop
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[ebp+4]
        push eax
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        setge bl
        test bl, bl
        mov byte ptr ss : [esp+0x1C], bl
        je public_65f7325
        mov eax, dword ptr ds : [edi+0x18]
        xor edx, edx
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], edx
        jle public_65f7316
        lea esp, ss:[esp]
        public_65f72d0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        mov esi, dword ptr ds : [eax+edx+0x1C]
        add eax, edx
        xor ecx, ecx
        test esi, esi
        jbe public_65f7303
        nop 
        public_65f72e0 : nop
        mov esi, dword ptr ds : [eax+0x18]
        mov si, word ptr ds : [esi+ecx*2]
        add si, word ptr ds : [eax+0x10]
        mov ebx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ebx], si
        add dword ptr ss : [esp+0x10], 2
        mov esi, dword ptr ds : [eax+0x1C]
        inc ecx
        cmp ecx, esi
        jb public_65f72e0
        mov bl, byte ptr ss : [esp+0x1C]
        public_65f7303 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+0x18]
        inc eax
        add edx, 0x24
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_65f72d0
        public_65f7316 : nop
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [public_6603148]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        public_65f7325 : nop
        mov al, bl
        public_65f7327 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x65f7240)
    }
}

#undef public_65f7295
#undef public_65f72d0
#undef public_65f72e0
#undef public_65f7303
#undef public_65f7316
#undef public_65f7325
#undef public_65f7327
