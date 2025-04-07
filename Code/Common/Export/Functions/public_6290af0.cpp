#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6290af0);

#define public_6290b6f _public_6290b6f
#define public_6290ba5 _public_6290ba5
#define public_6290bf2 _public_6290bf2
#define public_6290c0a _public_6290c0a
#define public_6290c8c _public_6290c8c
#define public_6290e66 _public_6290e66
#define public_62910fc _public_62910fc
#define public_6291349 _public_6291349
#define public_629134e _public_629134e
#define public_6291382 _public_6291382
#define public_62913ed _public_62913ed
#define public_629146a _public_629146a
#define public_62916c8 _public_62916c8

PROC_DECLARE(0x6290af0, internal_6290af0, public_6290af0);
extern "C" NAKED register_t __cdecl internal_6290af0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xCC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB4]
        test eax, eax
        push edi
        jne public_6290b6f
        mov eax, dword ptr ss : [ebp+8]
        mov edx, eax
        mov ebx, dword ptr ds : [edx]
        lea ecx, ds:[esi+8]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], edx
        mov ebx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x14]
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        lea eax, ds:[esi+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], edi
        jmp public_6290c0a
        public_6290b6f : nop
        cmp eax, 1
        lea edx, ds:[esi+0x14]
        jne public_6290ba5
        lea ecx, ds:[esi+8]
        mov eax, ecx
        mov ebx, dword ptr ds : [eax]
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        jmp public_6290bf2
        public_6290ba5 : nop
        mov eax, edx
        mov edi, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x20]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[esi+8]
        mov eax, ecx
        mov ebx, dword ptr ds : [eax]
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [esi+0x40], eax
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [esi+0x44], eax
        public_6290bf2 : nop
        mov eax, dword ptr ds : [esi+0x30]
        mov edi, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [esi+0x38], eax
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x3C], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], edi
        public_6290c0a : nop
        fld qword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [esi+0xB4]
        fld qword ptr ss : [ebp+0xC]
        inc eax
        fsub st, st(1)
        mov dword ptr ds : [esi+0xB4], eax
        xor eax, eax
        fstp qword ptr ss : [esp+0xB0]
        mov byte ptr ss : [esp+0xF], al
        fld qword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0xB8], eax
        fsubr st, st(1)
        mov dword ptr ds : [esi+0xBC], eax
        mov edi, ecx
        mov ebx, dword ptr ds : [edi]
        fstp qword ptr ss : [esp+0xA0]
        lea eax, ds:[esi+0x48]
        fstp st(0)
        mov dword ptr ds : [eax], ebx
        fld qword ptr ss : [esp+0xB0]
        mov ebx, dword ptr ds : [edi+4]
        fld qword ptr ss : [esp+0xA0]
        mov edi, dword ptr ds : [edi+8]
        fadd st, st(1)
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], edi
        fstp qword ptr ss : [esp+0x78]
        fld qword ptr ds : [esi+0xC0]
        fsub st, st(1)
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_6290c8c
        fstp st(0)
        fld qword ptr ds : [public_639c430]
        public_6290c8c : nop
        mov eax, dword ptr ds : [ecx]
        fadd st, st(1)
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        fstp qword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [edx]
        fstp qword ptr ds : [esi+0xB8]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x40], ecx
        lea eax, ds:[esi+0x20]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x3C], eax
        push edx
        lea eax, ss:[esp+0x9C]
        push eax
        call public_6288800
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x80]
        push eax
        call public_6288800
        fld dword ptr ss : [esp+0xAC]
        fmul dword ptr ss : [esp+0xAC]
        add esp, 0x18
        fld dword ptr ss : [esp+0x9C]
        fmul dword ptr ss : [esp+0x9C]
        faddp 
        fld dword ptr ss : [esp+0x98]
        fmul dword ptr ss : [esp+0x98]
        faddp 
        fsqrt 
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ss : [esp+0x74]
        faddp 
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x70]
        faddp 
        fsqrt 
        fstp qword ptr ss : [esp+0xC0]
        fld qword ptr ss : [esp+0xB0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jnp public_6291349
        fld qword ptr ss : [esp+0xA0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jnp public_6291349
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jnp public_6291349
        fld qword ptr ss : [esp+0xC0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jnp public_6291349
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x94]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0x98]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0x9C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x9C]
        fstp st(0)
        fld qword ptr ss : [esp+0xC0]
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x74]
        fstp st(0)
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ss : [esp+0x9C]
        faddp 
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x98]
        faddp 
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        je public_629134e
        fcomp qword ptr ds : [public_639c428]
        fnstsw ax
        test ah, 5
        jp public_6290e66
        mov byte ptr ss : [esp+0xF], 1
        public_6290e66 : nop
        fld qword ptr ss : [esp+0x78]
        sub esp, 0xC
        fmul qword ptr ss : [esp+0xAC]
        lea ecx, ss:[esp+0x94]
        fdivr qword ptr ds : [public_6399410]
        fst qword ptr ss : [esp+0x1C]
        fmul qword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ds : [public_6399410]
        sub esp, 0xC
        fdiv qword ptr ss : [esp+0xBC]
        lea ecx, ss:[esp+0x60]
        fstp qword ptr ss : [esp+0xCC]
        fld qword ptr ds : [public_6399410]
        fdiv qword ptr ss : [esp+0xAC]
        fadd qword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ds : [public_6399410]
        sub esp, 0xC
        fdiv qword ptr ss : [esp+0x84]
        lea ecx, ss:[esp+0x54]
        fadd qword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x90]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0xCC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x98]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x94]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x50]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0xD4]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0xD0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0xCC]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld qword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        fadd st(0), st
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        lea edi, ds:[esi+0x78]
        fmul st, st(1)
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        mov dword ptr ds : [ecx+4], eax
        fmul st, st(1)
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ss : [esp+0xA0]
        sub esp, 0xC
        fmul qword ptr ss : [esp+0xBC]
        lea ecx, ss:[esp+0x54]
        fdivr qword ptr ds : [public_639c420]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ss : [esp+0x78]
        sub esp, 0xC
        fmul qword ptr ss : [esp+0xBC]
        lea ecx, ss:[esp+0x60]
        fdivr qword ptr ds : [public_639c420]
        fld dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x94]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x9C]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0x9C]
        mov eax, ecx
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], edx
        public_62910fc : nop
        fld qword ptr ds : [esi+0xB8]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62916c8
        lea eax, ds:[esi+0x60]
        mov edx, eax
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x78], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x80], edx
        mov dword ptr ss : [esp+0x7C], ebx
        mov ebx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x54]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], ebx
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_639c13c]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x30]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld qword ptr ds : [esi+0xB8]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x54]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ds : [esi+0xB8]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x94]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ds : [esi+0xB8]
        sub esp, 0xC
        fld st(0)
        lea ecx, ss:[esp+0x60]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        fadd dword ptr ds : [esi+0x50]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ds : [esi+0x48]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x90]
        fadd dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0xAC]
        fld dword ptr ss : [esp+0x98]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x94]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0xA8]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x8C]
        lea ecx, ss:[esp+0xBC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB0]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xAC]
        fsub dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov al, byte ptr ss : [esp+0xF]
        sub esp, 0xC
        cmp al, 1
        lea ecx, ss:[esp+0x30]
        jne public_629146a
        fld qword ptr ds : [esi+0xB8]
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0xC4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xBC]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x84]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0x30], 0
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ds:[esi+0xA8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x34], 0
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], 0
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_62916c8
        public_6291349 : nop
        mov byte ptr ss : [esp+0xF], 1
        public_629134e : nop
        fstp st(0)
        fld qword ptr ss : [esp+0xB0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_6291382
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        lea eax, ss:[esp+0x10]
        jmp public_62913ed
        public_6291382 : nop
        fld dword ptr ss : [esp+0x68]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld qword ptr ss : [esp+0xB0]
        sub esp, 0xC
        fdivr dword ptr ds : [public_639a1d0]
        lea ecx, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        lea eax, ss:[esp+0x24]
        public_62913ed : nop
        mov edx, dword ptr ds : [eax]
        fld qword ptr ds : [esi+0xB8]
        fcomp qword ptr ds : [esi+0xC8]
        lea edi, ds:[esi+0x78]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[esi+0x9C]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, ecx
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        fnstsw ax
        test ah, 0x41
        jne public_62910fc
        mov edx, dword ptr ds : [esi+0xC8]
        mov eax, dword ptr ds : [esi+0xCC]
        mov dword ptr ds : [esi+0xB8], edx
        mov dword ptr ds : [esi+0xBC], eax
        jmp public_62910fc
        public_629146a : nop
        fld qword ptr ss : [esp+0xDC]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fld qword ptr ds : [public_6399410]
        fdiv qword ptr ds : [esi+0xB8]
        fsubp 
        fstp qword ptr ss : [esp+0x1C]
        fld st(0)
        fadd qword ptr ds : [esi+0xB8]
        fld st(0)
        fmul qword ptr ds : [esi+0xB8]
        fdivr st, st(2)
        fstp qword ptr ss : [esp+0xCC]
        fmulp 
        fdivr qword ptr ds : [esi+0xB8]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld qword ptr ss : [esp+0x10]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x8C]
        lea ecx, ss:[esp+0x54]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x88]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x84]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ss : [esp+0xC0]
        sub esp, 0xC
        fld dword ptr ss : [esp+0xB4]
        lea ecx, ss:[esp+0x60]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xAC]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x94]
        fld dword ptr ss : [esp+0x34]
        fchs 
        fld dword ptr ss : [esp+0x38]
        fchs 
        fld dword ptr ss : [esp+0x5C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x58]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x54]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x9C]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld qword ptr ss : [esp+0xD0]
        mov eax, dword ptr ss : [esp+0x10]
        fadd qword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0xD0]
        lea edx, ds:[esi+0x84]
        mov dword ptr ds : [edx], eax
        fmul st, st(1)
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fdivr qword ptr ds : [public_639c420]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x44]
        fld qword ptr ss : [esp+0xD0]
        fmul qword ptr ds : [esi+0xB8]
        fdivr qword ptr ds : [public_639c420]
        fld dword ptr ss : [esp+0x78]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x80]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x50]
        fxch st(3)
        fmul qword ptr ds : [esi+0xB8]
        fdivr qword ptr ds : [public_639c420]
        fld dword ptr ss : [esp+0xA0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0xA4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0xA8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fsub st, st(3)
        fstp dword ptr ss : [esp+0x54]
        fstp st(2)
        fstp st(1)
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x54]
        lea ecx, ds:[esi+0xA8]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ecx+8], edx
        public_62916c8 : nop
        xor eax, eax
        pop edi
        mov dword ptr ds : [esi+0xC0], eax
        mov dword ptr ds : [esi+0xC4], eax
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6290af0)
    }
}

#undef public_6290b6f
#undef public_6290ba5
#undef public_6290bf2
#undef public_6290c0a
#undef public_6290c8c
#undef public_6290e66
#undef public_62910fc
#undef public_6291349
#undef public_629134e
#undef public_6291382
#undef public_62913ed
#undef public_629146a
#undef public_62916c8
