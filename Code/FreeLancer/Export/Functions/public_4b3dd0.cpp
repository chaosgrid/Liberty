#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b3dd0);

#define public_4b3df7 _public_4b3df7
#define public_4b3f1e _public_4b3f1e
#define public_4b3f2f _public_4b3f2f
#define public_4b3f64 _public_4b3f64
#define public_4b3f83 _public_4b3f83
#define public_4b3f9b _public_4b3f9b
#define public_4b3fd8 _public_4b3fd8
#define public_4b3ff0 _public_4b3ff0
#define public_4b40bf _public_4b40bf

PROC_DECLARE(0x4b3dd0, internal_4b3dd0, public_4b3dd0);
extern "C" NAKED register_t __cdecl internal_4b3dd0()
{
    __asm
    {
        sub esp, 0x218
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+0x340]
        xor edx, edx
        mov ebx, edi
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], edi
        shl ebx, 5
        lea esi, ss:[ebp+0x394]
        public_4b3df7 : nop
        mov ecx, dword ptr ss : [ebp+0x334]
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], ebx
        je public_4b3fd8
        mov eax, dword ptr ss : [ebp+0x338]
        sub eax, ecx
        sar eax, 5
        cmp edi, eax
        jae public_4b3fd8
        push 0
        mov edi, ecx
        mov ecx, dword ptr ds : [esi+0x6C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        add edi, ebx
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x90]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x48]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x24]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+0x6C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        lea ecx, ss:[esp+0x2C]
/*FIXUP push offset public_5d0ec4 @0x4b3ec8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push ecx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x90]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        movzx eax, byte ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [esi-0x48]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx]
        test eax, eax
        jne public_4b3f1e
        push eax
/*FIXUP push offset public_5cb0d0 @0x4b3f0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb0d0
        push 4
        call dword ptr ds : [edx+0xA8]
        jmp public_4b3f2f
        public_4b3f1e : nop
        mov ebx, dword ptr ds : [edi+0x18]
        push ebx
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ebx, dword ptr ss : [esp+0x24]
        public_4b3f2f : nop
        mov edi, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ds : [ecx]
        push edi
        push 0x64
        push 0x40
        call dword ptr ds : [eax+0xA8]
        cmp edi, 0x46
        jl public_4b3f64
        mov byte ptr ss : [esp+0x14], 0x4B
        mov byte ptr ss : [esp+0x15], 0xC2
        mov byte ptr ss : [esp+0x16], 0x30
        mov byte ptr ss : [esp+0x17], 0xFF
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_4b3f9b
        public_4b3f64 : nop
        cmp edi, 0x1E
        jl public_4b3f83
        mov byte ptr ss : [esp+0x10], 0xF5
        mov byte ptr ss : [esp+0x11], 0xEA
        mov byte ptr ss : [esp+0x12], 0x26
        mov byte ptr ss : [esp+0x13], 0xFF
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_4b3f9b
        public_4b3f83 : nop
        mov byte ptr ss : [esp+0x18], 0xFF
        mov byte ptr ss : [esp+0x19], 0x26
        mov byte ptr ss : [esp+0x1A], 0x26
        mov byte ptr ss : [esp+0x1B], 0xFF
        mov eax, dword ptr ss : [esp+0x18]
        public_4b3f9b : nop
        mov ecx, dword ptr ds : [esi+0xB4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x3F
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc eax
        add esi, 4
        cmp eax, 9
        mov dword ptr ss : [esp+0x1C], eax
        jge public_4b40bf
        mov ecx, dword ptr ss : [esp+0x20]
        inc ecx
        mov dword ptr ss : [esp+0x20], ecx
        add ebx, 0x20
        mov edx, eax
        mov edi, ecx
        jmp public_4b3df7
        public_4b3fd8 : nop
        cmp edx, 9
        jge public_4b40bf
        mov edi, 9
        lea esi, ss:[ebp+edx*4+0x424]
        sub edi, edx
        nop 
        public_4b3ff0 : nop
        mov ecx, dword ptr ds : [esi-0x24]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x24]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0xD8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0xB4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x90]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x48]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0xD8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x6C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        add esi, 4
        dec edi
        jne public_4b3ff0
        public_4b40bf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x218
        ret 
        UNREACHABLE_TRAP(0x4b3dd0)
    }
}

#undef public_4b3df7
#undef public_4b3f1e
#undef public_4b3f2f
#undef public_4b3f64
#undef public_4b3f83
#undef public_4b3f9b
#undef public_4b3fd8
#undef public_4b3ff0
#undef public_4b40bf
